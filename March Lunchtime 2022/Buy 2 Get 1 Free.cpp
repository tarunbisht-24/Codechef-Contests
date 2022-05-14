/*
There is a sale going on in Chefland. For every 2 items Chef pays for, he gets the third item for free (see sample explanations for more clarity).

It is given that the cost of 1 item is X rupees. Find the minimum money required by Chef to buy at least N items.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers N and X.
Output Format
For each test case, output the minimum money required by Chef to buy at least N items.

Constraints
1≤T≤1000
1≤N,X≤1000
Subtasks
Subtask 1 (100 points): Original constraints.
Sample Input 1 
4
3 4
4 2
5 3
6 1
Sample Output 1 
8
6
12
4
Explanation
Test Case 1: Chef wants 3 items where the cost of each item is 4 rupees. To minimise the expenditure, Chef can pay for 2 items and get the third item for free. This way, the total money required is 4⋅2=8 rupees.

Test Case 2: To minimise the expenditure, Chef can do the following:

Purchase 2 items for 2⋅2=4 rupees and get the third one free. Thus, the total number of items is 3.
Purchase 1 item for 2⋅1=2 rupees. Now Chef has total 4 items.
Thus, the minimum money required to buy 4 items is 4+2=6 rupees.

Test Case 3: To minimise the expenditure, Chef can do the following:

Purchase 2 items for 3⋅2=6 rupees and get the third one free. Thus, the total number of items is 3.
Purchase 2 items for 3⋅2=6 rupees. Chef gets a third item for free. Now Chef has total 6 items which is greater than his requirement of 5 items.
Chef wanted to buy at least 5 items. The minimum money required for that is 6+6=12 rupees.

Test Case 4: To minimise the expenditure, Chef can do the following:

Purchase 2 items for 1⋅2=2 rupees and get the third one free. Thus, the total number of items is 3.
Purchase 2 items for 1⋅2=2 rupees and get the third one free.. Now Chef has total 6 items.
Thus, the minimum money required to buy 6 items is 2+2=4 rupees.
*/

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
