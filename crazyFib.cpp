#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long int t,x,y,n,rem,res;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>n;
		rem = n%6;
		switch(rem)
		{
			case 1: res=x;break;
			case 2: res=y;break;
			case 3:	res=y-x;break;
			case 4: res=(-1)*x;break;
			case 5: res=(-1)*y;break;
			case 0: res=x-y;break;
		}
		res = res%MOD;
		if(res<0)
			res+=MOD;
		cout<<res<<endl;
		
	}

	return 0;

}