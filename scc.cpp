#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int v,e;
int visited[10001] = {0};
stack<int> stck;
void dfs(vector<vector<int> > &graph,int s)
{
	visited[s] = 1;
	cout<<s<<" ";
	for (int i = 0; i < graph[s].size(); ++i)
	{
		int current = graph[s][i];
		if(!visited[current])
		{
			dfs(graph,current);
		}
	}
	stck.push(s);
}
void transpose(vector<vector<int > > &graph,vector<vector<int> > &graph2)
{
	for (int i = 0; i < v; ++i)
	{
		for (int j = 0; j < graph[i].size(); ++j)
		{
			// cout<<"1st iteration"<<endl;
			int current = graph[i][j];
			graph2[current].push_back(i);
		}
	}
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
	cout<<endl;
}
void print(vector<vector<int> > &graph2)
{
	cout<<"Printing transpose"<<endl;
	for (int i = 0; i < v; ++i)
	{
		cout<<i<<"\t";
		for (int j = 0; j < graph2[i].size(); ++j)
		{
			cout<<graph2[i][j]<<" ";
		}
		cout<<endl;
	}
}
void dfsUtil2(vector<vector<int> > &graph)
{
	for (int i = 0; i < v; ++i)
	{
		visited[i] = 0;
	}
	while(!stck.empty())
	{
		int current = stck.top();
		// cout<<"Popped Element is"<<current<<endl;
		stck.pop();
		if(!visited[current])
		{
			dfs(graph,current);
			cout<<endl;
		}
	}
}
int main()
{
	int a,b;
	cin>>v>>e;
	vector<vector<int> > graph(v);
	vector<vector<int> > graph2(v);
	for (int i = 0; i < e; ++i)
	{
		cin>>a>>b;
		graph[a].push_back(b);

	}

	dfsUtil(graph);
	transpose(graph,graph2);
	dfsUtil2(graph2);
	return 0;

}