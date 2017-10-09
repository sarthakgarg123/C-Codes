#include<bits/stdc++.h>
using namespace std;
bool areEqual(vector<int> &v1,vector<int> &v2)
{
	if(v1.size()!=v2.size())
		return false;
	unordered_map<int,int> umap;
	for (int i = 0; i < v1.size(); ++i)
	{
		umap[v1[i]]++;
	}
	for (unordered_map<int,int>::iterator i = umap.begin();i!=umap.end();i++)
	{
		cout<<i->first<<" "<<i->second<<endl;
	}

	for (int i = 0; i < v2.size(); ++i)
	{
		if(umap.find(v2[i])==umap.end())
			return false;
		if(umap[v2[i]]==0)
			return false;
		umap[v2[i]]--;

	}
	return true;
}
int main()
{
	int n,x;
	cin>>n;
	vector<int> v1,v2;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		v1.push_back(x);
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		v2.push_back(x);
	}
	bool b = areEqual(v1,v2);
	cout<<b<<endl;
	return 0;
}