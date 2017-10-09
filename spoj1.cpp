#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch[100];
	vector<char>v;
	int flag = 0;
	while(true)
	{
		cin.get(ch,100);
		if(strcmp(ch,"\n")==0)
			break;
		if(strcmp(ch,"42")==0)
		{
			flag=1;
		}
		if(flag==0)
		{
			v.push_back(ch);
		}
	}
}