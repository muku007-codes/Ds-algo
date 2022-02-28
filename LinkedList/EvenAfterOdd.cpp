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

void insertAtHead(node* &head, int val)
{
	node* n= new node(val);
	n->next = head;
	head = n;
}

void display(node* head)
{
	node* temp=head;

	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

void evenAfterOdd(node* &head)
{
	node* odd=head;
	node* even=head->next;
	node* evenstart=even;

	while(odd->next!= NULL && even->next!=NULL)
	{
		odd->next=even->next;
		odd=odd->next;
		even->next=odd->next;
		even=even->next;
	}

	odd->next=evenstart;


}

int main()
{
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtTail(head,6);
	insertAtTail(head,7);
	insertAtTail(head,8);
	display(head);
	evenAfterOdd(head);
	display(head);

 
    return 0; 
}