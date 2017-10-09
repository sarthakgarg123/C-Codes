#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	sort(s.begin(),s.end());
	for (int i = 0; i < s.size(); ++i)
	 {
	 	if(s[i+1]!='\0' && s[i+1]==s[i])
	 	{
	 		s[i]=' ';
	 	}
	 } 
	 for (int i = 0; s[i]!='\0'; ++i)
	 {
	 	// cout<<i;
	 	cout<<s[i];
	 }
	return 0;
}