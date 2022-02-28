#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n,p,k;
	cin>>n>>p>>k;
	int arr[n];
	for(int i=0;i<=n-1;i++)
	{
		arr[i]=i%k;
	}
	sort(arr,arr+n);

	for(int i=0;i<n;i++)
	{
		if(p<k)
		{
			if(arr[i]==(p%k))
				{
					i=i+1;
					cout<<i<<endl;	
				}
		}
		else if(p>=k)
		{
			if(arr[i]==(p%k))
				{
					i=i+2;
					cout<<i<<endl;
				}
		}
	}
	return 0;
}
