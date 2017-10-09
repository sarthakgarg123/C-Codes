#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n,x;
int visited[100001] = {0};
int dis[100001] = {0};
void bfs(vector<vector<long int> > graph,int s)
{
	queue<long int> q;
	q.push(s);
	visited[s] = 1;
	dis[s] = 1;
	while(!q.empty())
	{
		int s = q.front();
		q.pop();
		for(int i=0;i<graph[s].size();i++)
		{
			int current = graph[s][i];
			if(!visited[current])
			{
				visited[current]=1;
				dis[current] = dis[s] + 1;
				q.push(current);
			}
		}
	}
}
int main()
{
	long int a,b; 
	cin>>n;
	vector<vector<long int> > graph(n);
	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b;
		a--;b--;
		graph[a].push_back(b);
		graph[b].push_back(a);

	}
	cin>>x;
	bfs(graph,0);
	int c=0;
	for(int i=0;i<n;i++)
	{
		// cout<<dis[i]<<" ";
		if(dis[i]==x)
		{
			
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}