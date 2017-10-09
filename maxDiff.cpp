#include<bits/stdc++.h>
using namespace std;
void maxDiff(vector<int> &v)
{
	int max_diff = v[1] - v[0];
	int min_element = v[0];
	for (int i = 1; i < v.size(); ++i)
	{
		if(v[i]-min_element>max_diff)
		{
			max_diff = v[i] - min_element;
		}
		if(v[i]<min_element)
		{
			min_element = v[i];
		}
	}
	cout<<max_diff<<endl;
}
int main()
{
	int n,x;
	cin>>n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		v.push_back(x);
	}
	maxDiff(v);
	return 0;
}