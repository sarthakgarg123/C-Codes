#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
int v,e;
void dijkstras(vector<vector<pp> > &graph,int s)
{
	priority_queue< pp ,vector< pp > , greater<pp>	> pq;
	vector<int> dist(v,INT_MAX);
	pq.push(make_pair(0,s));
	dist[s] = 0;
	while(!pq.empty())
	{
		int s = pq.top().second;
		cout<<s<<" "<<pq.top().first<<endl;
		pq.pop();
		for (int i = 0; i < graph[s].size(); ++i)
		{
				int current = graph[s][i].first;
				int weight = graph[s][i].second;
				if(dist[current] > dist[s] + weight)
				{
					dist[current] = dist[s] + weight;
					pq.push(make_pair(dist[current],current));
				}
		}
	}
	for (int i = 0; i < dist.size(); ++i)
	{
		cout<<dist[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a,b,w;
	cin>>v>>e;
	vector<vector< pp > > graph(v);
	for (int i = 0; i < e; ++i)
	{
		cin>>a>>b>>w;
		// a--;b--;	
		graph[a].push_back(make_pair(b,w));
		graph[b].push_back(make_pair(a,w));
	}
	dijkstras(graph,0);
	return 0;
}