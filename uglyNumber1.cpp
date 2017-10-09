#include<bits/stdc++.h>
using namespace std;
int maxDivide(int n,int a)
{
	while(n%a==0)
	{
		n=n/a;
	}
	return n;
}
bool isUgly(int n)
{	
	n = maxDivide(n,2);
	n = maxDivide(n,3);
	n = maxDivide(n,5);
	return (n==1)?1:0;
}
int main()
{
	int n;
	cin>>n;
	cout<<isUgly(n)<<endl;
	return 0;
}