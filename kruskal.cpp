#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,pair<int,int> >
int v,e;
int array[1001];
int rank[1001] = {0};
int parent(int a)
{
	//Path compression when we find the parent of a vertex.
	if(array[a]!=a)
	{
		array[a] = parent(array[a]);
	}
	return array[a];
}
void un(int a,int b)
{
	//Union by rank
	int parent_a = parent(a);
	int parent_b = parent(b);
	if(rank[parent_a]>rank[parent_b])
		array[parent_b] = parent_a;
	else if(rank[parent_b] > rank[parent_a])
		array[parent_a] = parent_b;
	else
	{
		array[parent_b] = parent_a;
		rank[parent_a]++;
	}
}
void kruskal(vector<pp> & graph)
{
	for (int i = 0; i < graph.size(); ++i)
	{
		int u= graph[i].second.first;
		int v = graph[i].second.second;
		int weight = graph[i].first; 
		if(parent(u)!=parent(v))
		{
			cout<<weight<<" "<<u<<" "<<v<<endl;
			un(u,v);
		}

	}
}
int main()
{
	int a,b,w;
	cin>>v>>e;
	vector<pp> graph;
	for (int i = 0; i < e; ++i)
	{
			cin>>w>>a>>b;
			graph.push_back(make_pair(w,make_pair(a,b)));
	}
	sort(graph.begin(),graph.end());
	for (int i = 0; i < v; ++i)
	{
		array[i] = i;
	}
	kruskal(graph);
	return 0;
}