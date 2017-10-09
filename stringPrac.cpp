#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	cout<<s1<<endl;
	cout<<s2<<endl;
	if(s1.compare(s2)==0)
	{
		cout<<"Equal"<<endl;
	}
	cout<<s1.size()<<endl;
	int pos = s1.find(" ");
	string s3 = s1.substr(pos+1); 
	cout<<"First Name : "<<s3<<endl;


	return 0;
}