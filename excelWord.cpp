#include <bits/stdc++.h>
using namespace std;
void excelName(int n)
{
	string s1;
	while(n>0)
	{
		int rem=n%26;
		if(rem==0)
		{
			s1.push_back('Z');
			n=n/26-1;
		}
		else
		{
			s1.push_back((rem-1)+'A');
			n=n/26;
		}

	}
	
}
int main()
{
	int n;
	cin>>n;
	excelName(n);
	return 0;
}