	#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,flag;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				int temp = a[i]*a[j];
				flag=0;
				for (int k = 0; k < n; k++)
				{
					if(a[k]==temp){
						flag=1;
						break;
					}

				}
				if(flag==0)
				{
					cout<<"no"<<endl;
					break;
				}
			}
			if(flag==0)
			{
				break;
			}
		}
		if(flag==1)
		{
			cout<<"yes"<<endl;
		}

	}
	return 0;
}