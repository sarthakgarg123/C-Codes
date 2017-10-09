#include<bits/stdc++.h>
using namespace std;
int countChar[1001] = {0};
//First Non Repeating Character using count Array
int main()
{
	string ch;
	cin>>ch;
	for (int i = 0; ch[i]!='\0'; ++i)
	{
	 countChar[int(ch[i])]++;
	}
	for (int i = 0;ch[i]!='\0'; ++i)
	{
		if (countChar[int(ch[i])]==1)
		{
			cout<<ch[i]<<endl;
			break;
		}
	}
	// for (int i = 97; i <=127; ++i)
	// {
	// 	cout<<countChar[i]<<" ";
	// }
	return 0;
}