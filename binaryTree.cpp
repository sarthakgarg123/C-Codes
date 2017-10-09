	#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
	struct node* next;
};
struct node* getNewNode(int x)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	temp->next=NULL;
	return temp;
}
void levelOrderTraversal(struct node* root)
{
	queue<struct node*> q1,q2;
	q1.push(root);
	struct node* pre = NULL;
	while(!q1.empty() || !q2.empty())
	{
		pre=NULL;
		while(!q1.empty())
		{
			struct node* temp = q1.front();
			if(pre!=NULL) pre->next=temp;
			cout<<"For this:"<<temp->data<<endl;
			q1.pop();
			if(temp->left!=NULL)  q2.push(temp->left); 
			if(temp->right!=NULL) q2.push(temp->right);
			pre = temp;

		}pre=NULL;
		while(!q2.empty())
		{
			struct node* temp = q2.front();
			if(pre!=NULL) pre->next=temp;
			cout<<"For this:"<<temp->data<<endl;
			q2.pop();
			if(temp->left!=NULL)  q1.push(temp->left); 
			if(temp->right!=NULL) q1.push(temp->right);
			pre=temp;
		}
	}
}
void print(struct node* root)
{
	struct node* temp2=root;
	while(temp2!=NULL)
	{
		cout<<temp2->data<<" ";
		temp2=temp2->next;
	}cout<<endl;
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
	levelOrderTraversal(root);
		print(root->left->right);
	return 0;

}