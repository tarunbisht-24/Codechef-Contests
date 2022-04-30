/*
Given a positive integer N, MoEngage wants you to determine if it is possible to rearrange the digits of N (in decimal representation) and obtain a multiple of 5.

For example, when N=108, we can rearrange its digits to construct 180=36⋅5 which is a multiple of 5.

Input Format
The first line contains an integer T, the number of test cases. The description of the T test cases follow.
Each test case consists of two lines
The first line contains a single integer D, the number of digits in N.
The second line consists of a string of length D, the number N (in decimal representation). It is guaranteed that the string does not contain leading zeroes and consists only of the characters 0,1,…9.
Output Format
For each test case, print Yes if it is possible to rearrange the digits of N so that it becomes a multiple 5. Otherwise, print No.
You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as identical).

Constraints
1≤T≤1000
1≤D≤1000
1≤N<101000
Sum of D over all test cases ≤1000.
Sample Input 1 
3
3
115
3
103
3
119
Sample Output 1 
Yes
Yes
No
Explanation
Test Case 1: The given number is already divisible by 5, therefore the answer is Yes.

Test Case 2: We can obtain 310=62⋅5 by rearranging the digits of 103, so the answer is Yes.

Test Case 3: The only numbers that can be obtained by rearranging the digits of 119 are {119,191,911}. None of these numbers are multiples of 5, so the answer is No.
*/

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
