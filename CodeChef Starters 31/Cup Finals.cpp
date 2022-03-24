#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,d;
        cin>>a>>b>>d;
        if(abs(a-b)<=d)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	return 0;
}
