/*
Akash has his maths test tomorrow. He secretly found out one of the questions from the test. As the test is online, he wants to write a code that solves the question. However, he is not good at coding and thus, wants Chef to help him with that.

Chef is given a function F(X) such that the condition:

F(X)=F(2⋅X)
holds true for all X, where X is a positive integer.
For a given positive integer N, find the maximum number of distinct elements in the array [F(1),F(2),F(3),…,F(N)].

Input Format
First line will contain T - the number of test cases. Then the test cases follow.
Each test case contains a single line of input, one integer N.
Output Format
For each test case, output in a single line, the maximum number of distinct elements in the array [F(1),F(2),F(3),…,F(N)].

Constraints
1≤T≤1000
1≤N≤109
Subtasks
Subtask 1 (30 points): 1≤N≤1000
Subtask 2 (70 points): Original Constraints.
Sample Input 1 
2
2
5
Sample Output 1 
1
3
Explanation
Test case 1: Let X=1. Thus, 2=2⋅1=2⋅X. Therefore, F(1)=F(2). So, in the array [F(1),F(2)], there is only 1 distinct element.

Test case 2: Here, we can take X=1. Thus F(1)=F(2). Similarly, if we take X=2, F(2)=F(4). This means that F(1)=F(2)=F(4).
However, it can be possible that the values F(1),F(3), and F(5) are distinct. Hence, the maximum number of distinct elements in the array [F(1),F(2),F(3),F(4),F(5)] is 3.
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n&1)
        cout<<(n/2)+1<<endl;
        else
        cout<<(n/2)<<endl;
    }
	return 0;
}
