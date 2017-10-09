#include<bits/stdc++.h>
using namespace std;
list<int>::iterator addLl(list<int>::iterator head1,list<int>::iterator head2)
{
	if(head1.size()==0)
		return NULL;

}
int main()
{
	list<int> l1 {1,2,3,4};
	list<int> l2 {9,8,7,6};
	auto head1 = l1.begin();
	auto head2 = l2.begin();
	addLl(head1,head2); 
	return 0;
}