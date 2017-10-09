#include<bits/stdc++.h>
using namespace std;
int a[10];
int front =0,back=-1;
int itemCount =0 ;
bool empty()
{
	return back+1==front;
}
bool full()
{
	return back==9;
}
void push(int x)
{
	if(full()){ cout<<"Overflow \n"; return; }
	a[++back] = x;
}
void pop()
{
	if(empty()) { cout<<"Underflow \n"; front=0; back=-1; return; }
	front++;
}
void printfront()
{
	cout<<front<<endl;
}
void printback()
{
	cout<<back<<endl;
}	
int main()
{
	push(1);
	push(1);
	push(1);
	push(1);
	push(1);
	push(1);
	push(1);
	push(1);
	push(1);
	push(1);
	push(1);
	printfront(); printback();
	return 0;
}