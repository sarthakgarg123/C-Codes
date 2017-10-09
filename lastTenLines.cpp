#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	vector<string> v;
	while(getline(cin,s))
	{
		if(s.empty())
			break;
		v.push_back(s);
	}
	int count =10;
	if(v.size()>10)
	{
		for (int i = v.size()-1;count-- ; i--)
		{
			cout<<v[i]<<endl;
		}
	}
	else
	{
		for (int i = 0; i < v.size(); ++i)
		{
			cout<<v[i]<<endl;
		}
	}
	return 0;
}