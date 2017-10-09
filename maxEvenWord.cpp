#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s;
	getline(cin,s);
	if(s.empty())
	{
		return 0;
	}
	int c=0;
	int temp,flag=0;
	int maximum=0;
	vector<char> v;
	for (int i = 0; i < s.size()+1; ++i)
	{
		if(isalpha(s[i]))
		{
			c++;
			// cout<<s[i]<<" ";
		}
		if(isspace(s[i]) || s[i]=='\0')
		{
			if(c%2==0)
			{
				flag=1;
				if(c>maximum)
				{
					maximum=c;
					temp=i;
				}
			}
			c=0;
		}
	}
	if(flag==0)
	{
		cout<<"00"<<endl;
		return 0;
	}
	for (int i = temp-1; !isspace(s[i]) && i>=0; i--)
	{
		v.push_back(s[i]);
	}
	reverse(v.begin(),v.end());
	for (int i = 0; i < v.size(); ++i)
	{	
		cout<<v[i];
	}cout<<endl;
	return 0;
} 