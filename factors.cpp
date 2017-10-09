#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void primeFactors(int n)
{
	if(n==0)
	{
		v.push_back(0);
		return;
	}
	int i=2;
	while(i<=n)
	{
		if(n==1)
		{
			v.push_back(1);
			break;
		}
		else
		{
			if(n%i==0)
			{
				n=n/i;
				v.push_back(i);
				i=2;
			}
			else
				i++;
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int n,flag=0;
	int c=0;
	cin>>n;
	primeFactors(n);
	return 0;
}