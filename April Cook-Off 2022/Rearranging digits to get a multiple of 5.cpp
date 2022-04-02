#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,flag=0;
	    string s;
	    cin>>x>>s;
	    
	    for(int i=0;i<x;i++)
	    {
	        if(s[i]=='5' || s[i]=='0')
	        {
	        flag=1;
	        break;
	        }
	    }
	    
	    if(flag==1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
