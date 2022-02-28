#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,string> m;
	m[1]="Mukesh";
	m[2]="Gehlot";
	m[3]="Omprakash";
	m[4]="vinod";
	map<int,string>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
}
