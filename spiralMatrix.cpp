#include<bits/stdc++.h>
using namespace std;
const int n =4;
const int m = 4;
void spiralPrint(int a[][n],int x)
{
	for (int i = x; i < m-x; ++i) cout<<a[x][i]<<" ";
		for (int i=x+1;i<n-x; i++) cout<<a[i][n-x-1]<<" ";
			for (int i=n-2-x;i>=x;i--) cout<<a[n-1-x][i]<<" ";
				for (int i=n-2-x;i>=x+1;i--) cout<<a[i][x]<<" "; 
			}
		int main()
		{
			int t;
			cin>>t;
			while(t--)
			{
				int a[m][n];
				for (int i = 0; i < m; ++i)
				{
					for (int j = 0; j < n; ++j)
					{
						cin>>a[i][j];
					}
				}
				for (int i = 0; i < m/2; ++i)
				{
					spiralPrint(a,i);
				}
				cout<<endl;
			}
			return 0;
		}