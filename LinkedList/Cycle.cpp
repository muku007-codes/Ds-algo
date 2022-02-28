//detection and removing cycle in a ll
#include<iostream>
using namespace std;

class node{
     public:
     	int data;
     	node* next;

     	node(int val)
     	{
     		data = val;
     		next = NULL;
     	}
	};

void insertAtTail(node* &head,int val){

	node* n = new node(val);

	if(head==NULL){
		head=n;
		return;
	}

	node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}

	temp->next = n;
}

void makeCycle(node* &head,int pos)
{
	node* temp = head;
	node* startnode ;
	int count=1;
	while(temp->next!=NULL)
	{
		if(count==pos)
		{
			startnode = temp;
		}
		temp=temp->next;
		count++;
	}
	temp->next = startnode;
}

bool detectCycle(node* &head)
{
	node* fast=head;
	node* slow=head;

	while(fast!=NULL && fast->next!=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(fast==slow)
		{
			return true;
		}
	}
	return false;
}

void removeCycle(node* &head)
{
	node* fast=head;
	node* slow=head;

	while(fast!=NULL && fast->next!=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(fast==slow)
		{
			break;
		}
	}
	fast = head;

	while(slow->next!=fast->next)
	{
	fast=fast->next;
	slow=slow->next;
	}

	slow->next =NULL;	
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
	node* head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtTail(head,6);
	insertAtTail(head,7);
	insertAtTail(head,8);
	insertAtTail(head,9);
    display(head);
    cout<<detectCycle(head)<<endl;;
    makeCycle(head,4);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
    cout<<detectCycle(head)<<endl;


    return 0;
}