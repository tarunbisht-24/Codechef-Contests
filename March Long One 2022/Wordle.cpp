#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s,t;
	    cin>>s>>t;
	    
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]==t[i])
	        s[i] = 'G';
	        else
	        s[i] = 'B';
	    }
	    cout<<s<<endl;
	}
	return 0;
}
