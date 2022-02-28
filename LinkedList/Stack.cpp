#include<iostream>
using namespace std;

#define n 7
class stack
{
  private:

  int* arr;
  int top;

public: 

  stack(){
  	arr=new int[n];
  	top=-1;
  }
  
  void push(int x)
  {
  	if(top==(n-1)){ cout<<"Stack is full"<<endl;
  	
  }
  	else
  	{
  		top++;
  		arr[top]=x;
  		cout<<x<<": is pushed"<<endl;
  	}
  }

  void pop(){
  	if(top==-1)
  	{
  		cout<<"Stack is empty"<<endl;
  		return;
  	} 
  	else
  	{
  		top--;
  	}
  }
  
  int Top()
  {
  	if(top==-1)
  	{
  		cout<<"Stack is empty"<<endl;
  		
  	} 
  	else
  	{
  		return arr[top];
  	}
  }

  void empty()
  {
  	if(top==-1)
  	{
  		cout<<"Stack is empty"<<endl;
  		
  	} 
  	else {
  		cout<<"Stack contain some values"<<endl;
  		
  	}
  }
};


int main()
{
    stack st;
    st.push(1)
;    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
	return 0;
}