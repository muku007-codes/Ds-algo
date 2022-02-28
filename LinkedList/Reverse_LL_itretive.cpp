#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int val)
	{
		data=val;
		next=NULL;
	}
};

void insertAtTail(node* &head, int val)
{
	node* n= new node(val);

	if(head==NULL)
	{
		head = n;
		return;
	}

	node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}

void display(node* head)
{
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

node* reverse(node* &head)
{
	node* prevptr=NULL;
	node* currptr=head;
	node* nextptr;

	while(currptr!=NULL)
	{
		nextptr = currptr->next;
		currptr->next = prevptr;

		prevptr=currptr;
		currptr=nextptr;
	}
	return prevptr;

}

node* reverseRecursive(node* &head)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}
	node* newhead = reverseRecursive(head->next);

	head->next->next = head;
	head->next = NULL;

	return newhead;
}

int main()
{
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	display(head);
	node* newhead = reverseRecursive(head);
	display(newhead);
	

	return 0;
}