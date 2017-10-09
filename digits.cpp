#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n;	
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		v.push_back(x);
	}
	int count=0;
	int max=0;
	for (int i = 0; i < n; ++i)
	{
		if(v[i]==1)
			count++;
		else if(v[i]==0)
			count=0;
		if(count>max)
			max=count;

	}
	cout<<max<<endl;
	return 0;

}