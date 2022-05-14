/*
To access CRED programs, one needs to have a credit score of 750 or more.
Given that the present credit score is X, determine if one can access CRED programs or not.

If it is possible to access CRED programs, output YES, otherwise output NO.

Input Format
The first and only line of input contains a single integer X, the credit score.

Output Format
Print YES if it is possible to access CRED programs. Otherwise, print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as identical).

Constraints
0≤X≤1000
Subtasks
Subtask 1 (100 points): Original constraints.
Sample Input 1 
823
Sample Output 1 
YES
Explanation
Since 823≥750, it is possible to access CRED programs.

Sample Input 2 
251
Sample Output 2 
NO
Explanation
Since 251<750, it is not possible to access CRED programs.
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n>=750)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
