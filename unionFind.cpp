#include<bits/stdc++.h>
using namespace std;
int v,e;
int sets[1001];
int rank[1001] = {0};
int parent(int a)
{
	//path compression
	// cout<<a<<endl;
	if(sets[a]!=a)
	{
		sets[a] = parent(sets[a]);
	}
	return sets[a];
}
int uni(int a,int b)
{
	//By rank
	int parent_a = parent(a);
	int parent_b = parent(b);
	cout<<"Parents are: "<<parent_a<<" "<<parent_b<<" ";
	if(rank[parent_a] < rank[parent_b])
	{
		sets[parent_a] = parent_b;
	}
	else if(rank[parent_a] > rank[parent_b])
	{
		sets[parent_b] = parent_a;
	}
	else
	{
		sets[parent_b] = parent_a;
		rank[parent_a]++; 
	}
	cout<<endl;
}
int main()
{
	int a,b,c=0;
	cin>>v>>e;
	vector<vector<int> > graph;
	for (int i = 0; i < v; ++i)
	{
		sets[i] = i;
	}
	for (int i = 0; i < e; ++i)
	{
		cin>>a>>b;
		if(parent(a)!=parent(b))
		{
				for (int i = 0; i < v; ++i)
			{
				cout<<sets[i]<<" ";
			}
			cout<<endl;
			uni(a,b);
		}
		else 
			c++;
	}

	cout<<"No. of cycles detected are "<<c<<endl;
	for (int i = 0; i < v; ++i)
			{
				cout<<sets[i]<<" ";
			}
			cout<<endl;
	for (int i = 0; i < v; ++i)
			{
				cout<<rank[i]<<" ";
			}
			cout<<endl;
			
	return 0;
}