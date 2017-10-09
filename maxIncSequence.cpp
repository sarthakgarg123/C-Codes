#include<bits/stdc++.h>
using namespace std;
void maxIncreasingSubsequence(int a[],int n)
{
	int max=0;
	int sum;
	int temp;
	for (int i = 0; i < n-1; ++i)
	{
		sum=a[i];
		temp = a[i];
		cout<<"For temp "<<a[i]<<":::";
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>=temp)
			{
				sum = sum+a[j];
				temp=a[j];
				cout<<temp<<" ";
			}
		}cout<<endl;
		//cout<<sum<<endl;
		if(sum>=max)
		{
			max=sum;
		}
	}
	cout<<max<<endl;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		maxIncreasingSubsequence(a,n);
	}

	return 0;
}