#include<bits/stdc++.h>
using namespace std;
struct myNode
{
	int data;
	struct myNode* next;
};
struct myNode* head = NULL;
void insert(int data)
{
	struct myNode* temp = (struct myNode*)malloc(sizeof(struct myNode));
	temp->data = data;
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp;
		return;
	}
	struct myNode* temp2 = head;
	while(temp2->next!=NULL)
		temp2 = temp2->next;
	temp2->next = temp;

}
void reverseLinkedList()
{
	struct myNode* prev;
	struct myNode* current;
	struct myNode* next;
	prev = NULL;
	current = head;
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
void print()
{
	struct myNode* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	print();
	reverseLinkedList();
	print();
}