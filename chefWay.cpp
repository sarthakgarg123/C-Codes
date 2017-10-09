#include <bits/stdc++.h>
#define pp pair<int,int>
#define MOD 1000000007
using namespace std;
int n,k;
void print(vector<vector<pp> > &graph)
{
	for (int i = 1; i <=n; ++i)
	{
		cout<<i<<"\t";
		for (int j = 0; j < graph[i].size(); ++j)
		{
			cout<<graph[i][j].first<<" ";
		}
		cout<<endl;
	}
}
void dijkstra(vector<vector<pp> > &graph,int s)
{
	vector<int> dist(1000001,INT_MAX);
	vector<double> dist2(1000001);
	dist[s] = 0;
	priority_queue<pp,vector<pp>,greater<pp> >pq;
	pq.push(make_pair(0,s));
	while(!pq.empty())
	{
		int s = pq.top().second;
		pq.pop();
		for (int i = 0; i < graph[s].size(); ++i)
		{
			int current = graph[s][i].second;
			int weight = graph[s][i].first;
			// cout<<"Weight "<<weight<<endl;
			if(dist[current] > dist[s] + weight)
			{
				dist[current] = ((dist[s]) + (weight))%MOD;
				pq.push(make_pair(dist[current],current));
				// cout<<"Correct dist "<<dist[s]<<" "<<weight<<endl;
				if(dist[s]==0)
					dist2[current] = log(dist[s]+1%MOD) + log(weight%MOD);
				else
					dist2[current] = log(dist[s]%MOD) + log(weight%MOD);
			}
		}
	}
	cout<<exp(dist2[n])<<endl;
	// for (int i = 1; i <=n; ++i)
	// {
	// 	cout<<dist[i]<<" ";
	// }
	// cout<<endl;
	// for (int i = 1; i <=n; ++i)
	// {
	// 	cout<<exp(dist2[i])<<" ";
	// }
	// cout<<endl;
}
int main()
{
	int x;
	cin>>n>>k;
	vector<int>streets(n+1);
	vector<vector<pp> > graph(1000001);
	for (int i = 1; i <=n; ++i)
	{
		cin>>x;
		streets[i] = x;
	}
	for (int i = 1; i <=n; ++i)
	{
		int current = streets[i];
		for (int j = current+1; j<=k+current; ++j)
		{
			graph[current].push_back(make_pair(j,j));
		}
	}
	// print(graph);
	dijkstra(graph,1);
	
}