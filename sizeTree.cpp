#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* getNewNode(int data)
{
	struct node* temp = (struct node*)std::malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
int size(struct node* root)
{
	if(root==NULL)
		return 0;
	int left = size(root->left);
	int right = size(root->right);
	return 1+left+right;
}
int max(struct node* root)
{
	if(root==NULL)
		return INT_MIN;
	int lmax = max(root->left);
	int rmax = max(root->right);
	if(lmax > root->data)
		root->data = lmax;
	if(rmax > root->data)
		root->data = rmax;
	return root->data;
}
struct node* insert(struct node* root,int data)
{
	if(root==NULL)
		return getNewNode(data);
	else if(data <= root->data)
		root->left = insert(root->left,data);
	else if(data > root->data)
		root->right = insert(root->right,data);
	return root;
}
int main()
{
	struct node* root = NULL;
	root = insert(root,10);
	insert(root,5);
	insert(root,15);
	insert(root,3);
	insert(root,7);
	insert(root,13);
	cout<<size(root)<<endl;
	cout<<max(root)<<endl;
	return 0;
}