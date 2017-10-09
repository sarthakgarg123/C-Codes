#include<bits/stdc++.h>
using namespace std;
int n;
void subArray(int a[],int sum)
{
	int curr_sum=0,start=0;
	for (int i = 0; i < n; ++i)
	{
		
		curr_sum += a[i];
		cout<<curr_sum<<" ";
		while(curr_sum > sum && start<i-1)
		{
			curr_sum -= a[start];
			start++;
			cout<<"Subtracting "<<curr_sum<<" ";
		}
		if(curr_sum==sum)
		{
			cout<<endl<<start<<"\t"<<i<<endl;
			return ;
		}

	}
}
int main()
{
	int m;
	cin>>n>>m;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	subArray(a,m);
	return 0;
}