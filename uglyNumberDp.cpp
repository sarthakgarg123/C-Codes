#include<bits/stdc++.h>
using namespace std;
//Using Dp T(n)=O(n) S(n)=O(n)
vector<int> v;
int minimum(int a,int b,int c)
{
	if(a<=b && a<=c)
		return a;
	else if(b<a && b<c)
		return b;
	else
		return c;
}
void uglyNumber(int n)
{
	v.push_back(1);
	int i2=0,i3=0,i5=0;
	int next_multiple_2 = v[i2]*2;
	int next_multiple_3 = v[i3]*3;
	int next_multiple_5 = v[i5]*5;
	for (int i = 2; i <=n; ++i)
	{
		
		
		int next_ugly_number = minimum(next_multiple_2,next_multiple_3,next_multiple_5);
		v.push_back(next_ugly_number);
		if(next_ugly_number==next_multiple_2)
		{
			i2++;
			next_multiple_2 =v[i2]*2;
		}
		if(next_ugly_number==next_multiple_3)
		{
			i3++;
			next_multiple_3 =v[i3]*3;
		}
		if(next_ugly_number==next_multiple_5)
		{
			i5++;
			next_multiple_5 =v[i5]*5;
		}
		// cout<<next_multiple_2<<" "<<next_multiple_3<<" "<<next_multiple_5<<" "<<endl;
	}
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout<<v[i]<<" ";
	// }cout<<endl;
	cout<<v.back()<<endl;
}
int main()
{
	int n;
	cin>>n;
	uglyNumber(n);
	return 0;
}