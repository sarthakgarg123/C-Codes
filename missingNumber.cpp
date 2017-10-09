#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n-2];
	int xorArray = 0;
	int xorTotal =0;
	int xorSet1 = 0;
	int xorSet2 = 0;
	int xorArraySet1 =0;
	int xorArraySet2 =0 ;
	for (int i = 0; i < n-2; ++i)
	{
		cin>>a[i];
		xorArray = xorArray ^ a[i];
	}
	for (int i = 1; i <=n; ++i)
	{
		xorTotal ^= i;
	}
	int res = xorTotal^xorArray;
	cout<<res<<endl;
	int setBit = res & ~(res-1);
	cout<<setBit<<endl;
	for (int i = 1; i <=n; ++i)
	{
		if(i & setBit)
		{
			xorSet1 ^= i;
		}
		else
		{
			xorSet2 ^= i;
		}
	}
	for (int i = 0; i < n-1; ++i)
	{
		if(i & setBit)
		{
			xorArraySet1 ^= a[i];
		}
		else
		{
			xorArraySet2 ^= a[i];
		}
	}
	int n1 = xorArraySet1 ^ xorSet1;
	int n2 = xorArraySet2 ^ xorSet2;
	cout<<n1<<" "<<n2<<endl;
	return 0;
}