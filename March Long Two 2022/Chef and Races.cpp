#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,a,b,cnt=2;
	    cin>>x>>y>>a>>b;
	    if(x==a || x==b)
	    cnt--;
	    if(y==a || y==b)
	    cnt--;
	    
	    cout<<cnt<<endl;
	}
	return 0;
}
