#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* getNewNode(int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=NULL;
	temp->right = NULL;
	return temp;
}
void preOrder(struct node* root)
{
	if(root==NULL)
		return ;
	cout<<root->data<<endl;
	preOrder(root->left);
	preOrder(root->right);
}
void inOrder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	inOrder(root->left);
	cout<<root->data;
	inOrder(root->data);
}
struct node* insert(struct node* root,int data)
{
	if(root==NULL)
	{
		return (getNewNode(data));
	}
	else if(data <=root->data)
	{
		root->left = insert(root->left,data);
	}
	else if(data > root->data)
	{
		root->right = insert(root->right,data);
	}
	return root;
}
int main()
{
	struct node* root = NULL;
	root = insert(root,10);
	insert(root,3);
	insert(root,5);
	insert(root,15);
	preOrder(root);
}