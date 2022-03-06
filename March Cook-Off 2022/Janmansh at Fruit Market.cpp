#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,a,b,c;
	    int sum,mini,maxi,bruh;
	    cin>>x>>a>>b>>c;
	    sum = a + b + c;
	    maxi = a>b?(a>c?a:c):b>c?b:c;
	    mini = a<b?(a<c?a:c):b<c?b:c;
	    bruh = sum - (maxi+mini);
	    cout<<mini*(x-1) + bruh<<endl;
	}
	return 0;
}
