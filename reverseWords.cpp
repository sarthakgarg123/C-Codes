#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s1,s2;
	vector<string> v;
	while(t--)
	{
    	getline(cin,s1);
    	for (int i = 0; i < s1.size(); ++i)
    	{
    		if(s1[i]=='.')
    		{
    			v.push_back(s2);
    			s2.clear();
    		}
    		else
    		{
    			s2.push_back(s1[i]);
    		}
    	}
    	v.push_back(s2);
    	for (int i = v.size()-1; i>=0; i--)
    	{
    		cout<<v[i]<<".";
    	}
	    v.clear();
	    s1.clear();
	    s2.clear();
	}
	return 0;
}   