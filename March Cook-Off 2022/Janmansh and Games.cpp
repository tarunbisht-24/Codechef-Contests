#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if((x+y)&1)
	    cout<<"Jay"<<endl;
	    else
	    cout<<"Janmansh"<<endl;
	}
	return 0;
}
