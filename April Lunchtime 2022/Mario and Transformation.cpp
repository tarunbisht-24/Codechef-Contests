#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x%3==0)
	    cout<<"NORMAL"<<endl;
	    else if(x%3==1 || x==1)
	    cout<<"HUGE"<<endl;
	    else
	    cout<<"SMALL"<<endl;
	}
	return 0;
}
