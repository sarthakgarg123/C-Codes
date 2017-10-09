#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int sum=0,s=INT_MIN;
		int j=0,k;
		for (int i = 0; i < n; ++i)
		{
			sum+=a[i];
			if(s>sum)
			{
				s = sum;
				
			}
			if(sum<0)
				sum =0 ;
		}
		cout<<s<<endl;
	}
	return 0;
}