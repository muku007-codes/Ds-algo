//insertion, deletion
#include<iostream>
using namespace std;

class node{
     public:
     	int data;
     	node* next;
     	node* prev;

     	node(int val)
     	{
     		data = val;
     		next = NULL;
     		prev = NULL;
     	}
	};

void insertAtHead(node* &head,int val)
{
	node* n= new node(val);
	n->next=head;
	if(head!=NULL)
	{
		head->prev=n;//if ll is not empty
	}
     //here n ka prev already points to NULL because of constructor so we can't initialize it
	head=n;
}	

void insertAtTail(node* &head,int val){

	if(head==NULL)
	{
		insertAtHead(head,val);
		return;
	}

	node* n = new node(val);

	node* temp=head;

	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;

}


void deletion(node* &head,int pos)
{
	int count=1;
	node* temp=head;
	if(pos==1)
	{
	temp->next->prev=NULL;
     head=temp->next;
     delete temp;
     return;
	}
	while(temp!=NULL && count!=pos)
	{
		temp=temp->next;
		count++;
	}
	temp->prev->next=temp->next;

	if(temp->next!=NULL)
	{
	temp->next->prev=temp->prev;	
	}

	delete temp;
}

void display(node* &head)
{
	node* temp = head;

	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;	
	}
	cout<<"NULL"<<endl;
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
	insertAtTail(head,9);
	insertAtTail(head,10);
	insertAtHead(head,11);
     display(head);
     int pos=1;
     deletion(head,pos);
     display(head);
     pos=10;
     deletion(head,pos);
     display(head);


     return 0;

}