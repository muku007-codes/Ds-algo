#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;  cin>>t;
	while(t--)
	{
	    int arr[]={2,5,3,5};
	    int n = sizeof(arr) / sizeof(arr[0]);

	   // for(int i=0;i<4;i++)
	   // {
	   //     cin>>arr[i];
	   // }
	    
	    sort(arr, arr + n);
	    
	    for(int i=0;i<4;i++)
	    {
	        cout<<arr[i];
	    }
	    
	}
}

