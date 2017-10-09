#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n = 100,x=7.4,res;
	res = sqrt(n);
	//useful math functions..
	cout<<res<<endl;
	res = pow(res,1);
	cout<<res<<endl;
	cout<<floor(x)<<endl;
	cout<<ceil(x)<<endl;
	cout<<log(res)<<endl;
	cout<<exp(log(res))<<endl;

	//useful input methods
	char str[20];
	fgets(str,20,stdin);
	cout<<strlen(str)<<endl<<str;


}