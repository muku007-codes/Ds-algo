#include<iostream>
#include<stack>
using namespace std;

int put_at_the_last(stack<int>&st,int k)
{
	if(st.empty())
	{
		st.push(k);
		return 0;
	}

	int temp=st.top();
	st.pop();
	put_at_the_last(st,k);

	st.push(temp);

	return 0;
}

int reverse_stack(stack<int> & st)
{
    if(st.empty())
    {
    	return 0;
    }

	int temp=st.top();
	st.pop();

	reverse_stack(st);

    put_at_the_last(st,temp);
    
}

int main()
{
   stack<int> st;
   st.push(5);
   st.push(4);
   st.push(3);
   st.push(2);
   st.push(1);

   reverse_stack(st);
   while(!st.empty())
   {
   	cout<<st.top()<<endl;
   	st.pop();
   }
}