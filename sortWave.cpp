#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
void waveSort()
{
	for (int i = 0; i < n; i=i+2)
	{
		if(i-1>=0 && v[i-1]>v[i])
		{	
			int temp = v[i];
			v[i] = v[i-1];
			v[i-1] = temp;
		}
		if(i+1<n && v[i+1]>v[i])
		{
			int temp = v[i];
			v[i] = v[i+1];
			v[i+1] = temp;
		}
	}
}
int main()
{
	int x;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		v.push_back(x);
	}
	waveSort();
	for (int i = 0; i < n; ++i)
	{
		cout<<v[i]<<" ";
	}cout<<endl;
	return 0;
}