#include<bits/stdc++.h>
using namespace std;
int lis(int a[],int i,int n,int prev)
{
	if(i==n)
		return 0;
	int excl = lis(a,i+1,n,prev);
	int incl=0;
	if(a[i]>=prev)
	{
		incl = 1+lis(a,i+1,n,a[i]);
	} 
	return max(excl,incl);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int res = lis(a,0,n,INT_MIN);
	cout<<res<<endl;
	return 0;
}