#include<bits/stdc++.h>
using namespace std;
int priority(char ch)
{
	if(ch=='(') return 3;
	else if(ch=='/' || ch=='*') return 2;
	else if(ch=='+' || ch=='-') return 1;
	else return -1;
}
void infixToPostfix(char ch[])
{
	stack<char> stck;
	string s;
	for (int i = 0; ch[i]!='\0'; ++i)
	{
		if(isdigit(ch[i]))
			s.push_back(ch[i]);
		else if(ch[i]=='(')
			stck.push(ch[i]);
		else if(ch[i]==')')
		{
			while(!stck.empty() && stck.top()!='(')
			{
				s.push_back(stck.top());
				stck.pop();
			}
			stck.pop();
		}
		else if(ch[i]=='+' || ch[i]=='-' || ch[i]=='*' || ch[i]=='/')
		{
				// cout<<"Hello operators"<<endl;
				while( !stck.empty() && priority(ch[i]) < priority(stck.top()) && stck.top()!='(' )
				{
					s.push_back(stck.top());
					stck.pop();
				}
				stck.push(ch[i]);	
		}
	}
	while(!stck.empty())
	{
		s.push_back(stck.top());
		stck.pop();
	}
	cout<<s<<endl;

}
int main()
{
	int n;
	cin>>n;
	char ch[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>ch[i];
	}
	infixToPostfix(ch);
	return 0;
}