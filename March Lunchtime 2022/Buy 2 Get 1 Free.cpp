#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    cout<<(n*x) - ((n/3)*x)<<endl;
	}
	return 0;
}
