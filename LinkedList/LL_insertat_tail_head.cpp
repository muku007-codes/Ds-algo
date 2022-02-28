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
bool search(node* head,int key)
{
	node* temp = head;
	while(temp!= NULL)
	{
		if(temp->data==key){
			return true;
		}

		temp=temp->next;
	}
	return false;
}

void deletion(node* &head, int val)
{
	if(head==NULL)
	{
		return;
	}
	if(head->next==NULL)
	{
		deletionAtHead(head);
		return;
	}

	node* temp = head;
	while(temp->next->data!=val)
	{
		temp = temp->next;
	}
	node* todelete = temp->next;
	temp->next = temp->next->next;

	delete todelete;
}

void deletionAtHead(node* &head)
{
	node* todelete = head;
	head = head->next;

	delete todelete;
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

int main()
{
node* head=NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
insertAtTail(head,6);
insertAtTail(head,7);
insertAtTail(head,8);
insertAtTail(head,9);
insertAtTail(head,10);
display(head);
insertAtHead(head,5);
display(head);
cout<<search(head,10)<<endl;
deletion(head,4);
display(head);
deletionAtHead(head);
display(head);
}