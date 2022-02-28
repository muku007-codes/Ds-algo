#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)//for rows 
	{
		for(int j=i;j<n;j++)// total coloumns are n-1 
		{
			cout<<" "<<" ";
		}

		for(int k=1;k<=(2*i-1);k++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
