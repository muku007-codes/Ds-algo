#include<iostream>
using namespace std;

int main()
{
	pair<int,string> p1;

	p1.first=1;
	p1.second='Mukesh';

	pair<string, double> p2("Gehlot", 1.23);
	cout << p2.first << " ";
    cout << p2.second << endl;

    pair<string,int>
    p3=make_pair('MukeshGehlot',3);

    p1.swap(p3);// swap two pairs
    

	return 0;
}