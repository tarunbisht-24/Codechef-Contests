#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,i=0,j=0;
	    cin>>x>>y;
	    i = (100*x)/10;
	    j = (100*y)/20;
	    
	    if(i>j)
	    cout<<"First"<<endl;
	    else if(i==j)
	    cout<<"Any"<<endl;
	    else
	    cout<<"Second"<<endl;
	}
	return 0;
}
