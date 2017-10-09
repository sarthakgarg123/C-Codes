#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int v,e;
int visited[10001] = {0} ;
int dist[10001] = {0} ;
int  parent[10001];
void dfs(vector<vector<int> > & graph,int s)
{
	
	stack<int> stck;
	stck.push(s);
	dist[s] = 0;
	while(!stck.empty())
	{
		int s = stck.top();
		stck.pop();
		if(visited[s])
		{
			cout<<endl<<"Cycle Detected"<<endl;
			int temp = s;
			int temp2 = parent[s];
			cout<<temp<<" ";
			while(temp != temp2)
			{
				temp = temp2;
				temp2 = parent[temp];
				cout<<temp<<" ";
				
			}
			cout<<endl;
		}
		else if(!visited[s])
		{
			visited[s] = 1;
			cout<<s<<" ";
		}
		for(int i=0;i<graph[s].size();i++)
		{
			int current = graph[s][i];
			if(!visited[current])
			{
				stck.push(current);
				dist[current] = dist[s] + 1;
				parent[current] = s;

			}
		}
	}
	cout<<endl<<"Distance array"<<endl;
	for (int i = 0; i < v; ++i)
	{
		cout<<dist[i]<<" ";
	}
	cout<<endl<<"parent Array"<<endl;
	for (int i = 0; i < v; ++i)
	{
		cout<<parent[i]<<" ";
	}
	
}

void dfsUtil(vector<vector<int> > &graph)
{
	for (int i = 0; i < v; ++i)
	{
		parent[i] = i;
	}
	for (int i = 0; i < v; ++i)
	{
		if(!visited[i])
		{
			cout<<endl;
			dfs(graph,i);
		}
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