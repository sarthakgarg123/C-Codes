	#include<iostream>
	#include<algorithm>
	#include<vector>
	#include<queue>
	using namespace std;
	int v,e;
	int c=0;
	int visited[1001] = {0};
	int dis[1001] = {0};
	int parent[1001];
	int pathLength =0 ;
	void print(vector<vector<int> > graph)
	{
		for (int i = 0; i < v; ++i)
		{
			cout<<i<<"\t";
			for(int j = 0;j < graph[i].size() ; j++)
			{
				cout << graph[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	void bfs(vector<vector<int> > graph,int s)
	{
		visited[s]=1;
		dis[s] = 0;
		cout<<s<<" ";
		queue<int> q;
		q.push(s);
		while(!q.empty())
		{
			int s = q.front();
			q.pop();
			for(int i=0;i<graph[s].size();i++)
			{	
				int current = graph[s][i];
				if(visited[current]==1)
				{
					c++;
					
				}
				
				if(!visited[current])
				{
					q.push(current);
					cout<<current<<" ";
					visited[current] = 1;
					parent[current] = s;
					dis[current] = dis[s] + 1;


				}
			}
		
		}
		
		cout<<endl<<"Visited Array"<<endl;
		for(int i=0;i<v;i++)
		{
			cout<<visited[i]<<" ";
		}
		cout<<endl<<"Distance Array"<<endl;
		for(int i=0;i<v;i++)
		{
			cout<<dis[i]<<" ";
		}
		cout<<endl<<"Parent Array"<<endl;
		for(int i=0;i<v;i++)
		{
			cout<<parent[i]<<" ";
		}
		cout<<endl;
	}

	void bfsUtil(vector<vector<int> > graph)
	{
		for(int i=0;i<v;i++)
		{
			parent[i] = i;
		}
		for(int i=0;i<v;i++)
		{
			if(!visited[i])
			{
				bfs(graph,i);
			}
		}
	}

	int printPath(int s,int v)
	{
		if(s==v)
		{
			cout<<s<<" ";
		}
		else if(parent[v]==v)
		{
			// cout<<"No path Exist";
			pathLength = -1 ;
			return pathLength;
		}
		else
		{
			int temp;
			temp = printPath(s,parent[v]);
			if(temp==-1)
			{
				return -1 ;
			}
			else{
				pathLength++;
				cout<<v<<" ";
			}
		}
		return pathLength;
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
		print(graph);
		bfsUtil(graph);
		cout<<"Path from one vertex to other is"<<endl;
		int len = printPath(0,4);
		cout<<endl<<len<<endl;
		cout<<"Cycle Detected"<<c<<endl;
		return 0;
	}