#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,cnt=0;
	    cin>>n;
	    int* arr = new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=10 && arr[i]<=60)
	        cnt++;
	    }
	    
	    cout<<cnt<<endl;
	}
	return 0;
}
