/*
Chef's phone shows a Battery Low notification if the battery level is 15% or less.

Given that the battery level of Chef's phone is X%, determine whether it would show a Battery low notification.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains a single line of input, an integer X, denoting the battery level of the phone.
Output Format
For each test case, output in a single line Yes, if the battery level is 15% or below. Otherwise, print No.

You may print each character of Yes and No in uppercase or lowercase (for example, YeS, YES, yes will be considered identical).

Constraints
1≤T≤100
1≤X≤100
Subtasks
Subtask #1 (100 points): original constraints

Sample Input 1 
3
15
3
65
Sample Output 1 
Yes
Yes
No
Explanation
Test Case 1: The battery level is 15. Thus, it would show a battery low notification.

Test Case 2: The battery level is 3, which is less than 15. Thus, it would show a battery low notification.

Test Case 3: The battery level is 65, which is greater than 15. Thus, it would not show a battery low notification.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x>=1 && x<=15)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
