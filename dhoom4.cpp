#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define MOD 100000
long int count[100001] = {0};
int main()
{
	long long int mainKey,lockKey,n,temp;
	vector<long long int> keys;
	cin>>mainKey>>lockKey;
	cin>>n;
	for(long int i=0;i<n;i++)
	{
		cin>>temp;
		keys.push_back(temp);

	}
	queue<long long int> q;
	q.push(mainKey);
	long long int temp2;
	count[mainKey] = 0;
	while(!q.empty())
	{
		long long int current = q.front();
		q.pop();
		for(long int i=0;i<n;i++)
		{
			temp2 = (current * keys[i]) % MOD; 
			q.push(temp2);
			count[temp2] = count[current] + 1;
			 cout<<temp2<<" "<<"Count is "<<count[temp2]<<endl;
			if(temp2 == lockKey)
			{
				cout<<count[temp2]<<endl;
				return 0;
			}
			else if(current == lockKey)
			{
				cout<<count[current]<<endl;
				return 0;	
			}
		}
		  cout<<endl<<"New Level"<<endl;

	}
	return 0;

}