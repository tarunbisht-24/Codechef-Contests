#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=0,b=0,cnt=0;
	    cin>>n;
	    int *arr1 = new int[n];
	    int *arr2 = new int[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	    }
	    
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr2[j];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr1[a]==arr2[b])
	        {
	        cnt++;
	        a++;
	        b++;
	        }
	        else
	        {
	           a++;
	           b++;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
