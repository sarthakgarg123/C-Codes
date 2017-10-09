#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,e;
	cin>>n>>e;
	int minTries[e+1][n+1];
	for (int i = 0; i <=e; ++i)
	{
		for (int j = 0; j <=n; ++j)
		{
			if(i==0 || j==0)
			{
				minTries[i][j] =0;
			}
			else if(i==1)
			{
				minTries[i][j] = j;
			}
			else if(j==1)
			{
				minTries[i][j] = 1;
			}
			else
			{	
				minTries[i][j] = INT_MAX;
				for (int x = 1; x <=j; ++x)
				{
					int res = 1+max(minTries[i-1][x-1],minTries[i][j-x]);
					if(res<minTries[i][j])
					{
						minTries[i][j] = res;
					}
				}
			}
		}
	}
	for (int i = 1; i <=e; ++i)
	{
		for (int j = 1; j <=n; ++j)
		{
			cout<<minTries[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<minTries[e][n];
	return 0;
}