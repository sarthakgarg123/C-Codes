#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>n>>w;
	vector<int> weights;
	vector<int> values;
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		values.push_back(a);
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		weights.push_back(a);
	}
	int k[n+1][w+1];
	for (int i = 0; i <=n; ++i)
	{
		for (int i = 0; i <=w; ++i)
		{
			if(i==0 || j==0)
				a[i][j] = 0;

		}
	}
	return 0;
}