/*
Chef invented a modified wordle.

There is a hidden word S and a guess word T, both of length 5.

Chef defines a string M to determine the correctness of the guess word. For the ith index:

If the guess at the ith index is correct, the ith character of M is G.
If the guess at the ith index is wrong, the ith character of M is B.
Given the hidden word S and guess T, determine string M.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of two lines of input.
First line contains the string S - the hidden word.
Second line contains the string T - the guess word.
Output Format
For each test case, print the value of string M.

You may print each character of the string in uppercase or lowercase (for example, the strings BgBgB, BGBGB, bgbGB and bgbgb will all be treated as identical).

Constraints
1≤T≤1000
|S|=|T|=5
S,T contain uppercase english alphabets only.
Sample Input 1 
3
ABCDE
EDCBA
ROUND
RINGS
START
STUNT
Sample Output 1 
BBGBB
GBBBB
GGBBG
Explanation
Test Case 1: Given string S=ABCDE and T=EDCBA. The string M is:

Comparing the first indices, A≠E, thus, M[1]=B.
Comparing the second indices, B≠D, thus, M[2]=B.
Comparing the third indices, C=C, thus, M[3]=G.
Comparing the fourth indices, D≠B, thus, M[4]=B.
Comparing the fifth indices, E≠A, thus, M[5]=B.
Thus, M=BBGBB.
Test Case 2: Given string S=ROUND and T=RINGS. The string M is:

Comparing the first indices, R=R, thus, M[1]=G.
Comparing the second indices, O≠I, thus, M[2]=B.
Comparing the third indices, U≠N, thus, M[3]=B.
Comparing the fourth indices, N≠G, thus, M[4]=B.
Comparing the fifth indices, D≠S, thus, M[5]=B.
Thus, M=GBBBB.
*/

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
