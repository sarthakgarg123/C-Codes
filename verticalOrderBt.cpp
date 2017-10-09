#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* getNewNode(int x)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void getHorizontalDis(struct node* root,int hd,map<int,vector<int> > &m)
{
	if(root==NULL)
		return ;
	m[hd].push_back(root->data);
	getHorizontalDis(root->left,hd-1,m);
	getHorizontalDis(root->right,hd+1,m);
}
void printVerticalOrder(struct node* root)
{
	int hd=0;
	map<int,vector<int> > m;
	getHorizontalDis(root,hd,m);
	map<int,vector<int> > ::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		for (int i = 0; i < it->second.size(); ++i)
		{
			cout<<(it->second)[i]<<" ";
		}cout<<endl;
	}
}


int main()
{
	struct node* root = NULL;
	root = getNewNode(1);
	root->left=getNewNode(2);
	root->right=getNewNode(3);
	root->left->left=getNewNode(4);
	root->left->right=getNewNode(5);
	root->right->left=getNewNode(6);
	root->right->right=getNewNode(7);
	printVerticalOrder(root);
	return 0;

}