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

node* reversek(node* &head,int k) //k means starting k positions are revresed (using itrative & recurcive) 
{
	node* prevptr=NULL;
	node* currptr=head;
	node*nextptr;

	int counter=0;
	while(currptr!=NULL && counter<k)
	{
		nextptr = currptr->next;
		currptr->next = prevptr;

		prevptr=currptr;
		currptr=nextptr;
		counter++;
	}

    if(nextptr!=NULL)
    {
	head->next = reversek(nextptr,k);
    }
    return prevptr;
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
	display(head);
	int k=3;
	node* newhead = reversek(head,k);
	display(newhead);

	return 0;
}