#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s)
{
	stack<char>st;
	bool answer = true;

	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='{' || s[i]=='(' || s[i]=='[')
		{
			st.push(s[i]);
		}
		else if(s[i]=='}')
		{
			if(!st.empty() and st.top()=='{')
			{
				st.pop();
			}
			else
			{
				answer=false;
				break;
			}
		}
		else if(s[i]==')')
		{
			if(!st.empty() and st.top()=='(')
			{
				st.pop();
			}
			else
			{
				answer=false;
				break;
			}
		}

		else if(s[i]==']')
		{
			if(!st.empty() and st.top()=='[')
			{
				st.pop();
			}
			else
			{
				answer=false;
				break;
			}
		}
	}
	if(!st.empty())
	{
		return false;
	}
	return answer;
}


int main()
{
   string s="{([])}";
   if(isvalid(s))
   {
   	cout<<"string is valid"<<endl;
   }
   else
   {
   	cout<<"string is not valid"<<endl;
   }
   return 0;
}