#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	while(t--)
		{
			cin>>n;
			int flag=0;
			int a[n];
			int sum[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			if(n==1)
			{
				cout<<1<<endl;
				continue;

			}
			sum[0] = a[0];
			for (int i = 1; i < n; ++i)
			{
				sum[i] = sum[i-1] + a[i];
		// cout<<sum[i]<<" ";
	} //cout<<endl;
	for (int i = 0; i < n; ++i)
	{
		if(i-1>=0 && sum[i-1]==sum[n-1]-sum[i])
		{
			cout<<i+1<<endl;
			flag=1;
			break;
		}

	}
	if(flag==0)
	{
		cout<<-1<<endl;
	}
}
return 0;	

}