/*
The Chef has reached the finals of the Annual Inter-school Declamation contest.

For the finals, students were asked to prepare 10 topics. However, Chef was only able to prepare three topics, numbered A, B and C — he is totally blank about the other topics. This means Chef can only win the contest if he gets the topics A, B or C to speak about.

On the contest day, Chef gets topic X. Determine whether Chef has any chances of winning the competition.

Print "Yes" if it is possible for Chef to win the contest, else print "No".

You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

Input Format
The first and only line of input will contain a single line containing four space-separated integers A, B, C, and X — the three topics Chef has prepared and the topic that was given to him on contest day.
Output Format
For each testcase, output in a single line "Yes" or "No".
You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
Constraints
1≤A,B,C,X≤10
A,B,C are distinct.
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
2 3 7 3
Sample Output 1 
Yes
Explanation
Chef had prepared the topics: 2,3,7. Chef gets to speak on the topic: 3. Since Chef had already prepared this, there is a chance that he can win the contest.

Sample Input 2 
4 6 8 5
Sample Output 2 
No
Explanation
Chef had prepared the topics: 4,6,8. Chef gets to speak on the topic: 5. Since Chef didn't prepare this topic, there is no chance that he can win the contest.
*/

#include <iostream>
using namespace std;

int main() {
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	
	if(x==a || x==b || x==c)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}
