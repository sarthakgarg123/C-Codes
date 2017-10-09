#include<bits/stdc++.h>
using namespace std;
int n,m;
int triplets(vector<int> &v)
{
	int third,count=0;
	unordered_map<int,int> umap;
	unordered_map<int,int>::iterator it;
	if(v.empty())
	{
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		umap[v[i]] = i;
	}
	for (int i = 0; i < v.size()-1; ++i)
	{
		for(int j=i+1;j<v.size();j++)
		{
			int temp = v[i]*v[j];
			if(m%(v[i]*v[j])==0 && (v[i]*v[j])!=0)
			{
				third = m/(v[i]*v[j]);
				// cout<<third<<endl;
				it = umap.find(third);
				if(it!=umap.end() && it->first!=v[i] && it->first!=v[j] && it->second > i && it->second > j)
					{cout<<v[i]<<" "<<v[j]<<" "<<third<<endl;count++;}
			}
		}
	}
	return count;
}
int main()
{
	int x;
	cin>>n>>m;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		v.push_back(x);
	}
	int count = triplets(v);
	cout<<count<<endl;
	return 0;
}