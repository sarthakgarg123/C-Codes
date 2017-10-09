#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char ch[101];
	while(t--)
	{
		int mong=0,snakes=0,eaten=0;
		cin>>ch;
		int eat[101] = {0};
		for (int i = 0; ch[i]!='\0'; ++i)
		{
			if(ch[i]=='m')
			{
				mong++;
				if(i-1>=0 && ch[i-1]=='s' && eat[i-1]==0)
				{	
					eaten++;eat[i-1]=1;
				}
				else if(i+1<strlen(ch) && ch[i+1]=='s' && eat[i+1]==0)
				{
					eaten++;
					eat[i+1]=1;
				}
			}
			else
				snakes++;
		}

		if(snakes-eaten>mong)
			cout<<"snakes"<<endl;
		else if(snakes-eaten<mong)
			cout<<"mongooses"<<endl;
		else
			cout<<"tie"<<endl;
	}
	return 0;
}