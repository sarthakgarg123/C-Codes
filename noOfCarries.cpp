#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,count=0;
	int noOfDig=0;
	int flag=0;
	cin>>x>>y;
	int dig1,dig2;
	while(x>0 || y>0)
	{
		dig1=x%10;
		dig2=y%10;
		// cout<<dig1<<" "<<dig2<<endl;
		if(dig1+dig2>=10 && flag==0)
		{
			count++;
			flag=1;
		}
		else if(flag==1)
		{
			if(dig1+dig2+1>=10)
			{
				count++;
				flag=1;
			}
		}
		else
		{
			flag=0;
		}
		x=x/10;
		y=y/10;

	}
	cout<<count<<endl;
	return 0;
}