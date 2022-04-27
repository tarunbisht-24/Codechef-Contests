#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n>=1000)
	    cout<<n/10<<endl;
	    else
	    cout<<100<<endl;
	}
	return 0;
}
