#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int v,e;
int visited[10001] = {0} ;
stack<int> stck;
void dfs(vector<vector<int> > & graph,int s)
{	
	visited[s] = 1;
	for (int i = 0; i < graph[s].size(); ++i)
	{
		int current = graph[s][i];
		if(!visited[current])
		dfs(graph,current);
	}
	stck.push(s);
}

void dfsUtil(vector<vector<int> > &graph)
{
	
	for (int i = 0; i < v; ++i)
	{
		if(!visited[i])
		{
			dfs(graph,i);
		}
	}
	while(!stck.empty())
	{
		cout<<stck.top()<<" ";
		stck.pop();
	}
}

int main()
{	
	int a,b;
	cin>>v>>e;
	vector<vector<int> > graph(v);
	for(int i=0;i<e;i++)
	{
		cin>>a>>b;
		graph[a].push_back(b);
		// graph[b].push_back(a);

	}
	dfsUtil(graph);
	return 0;
}