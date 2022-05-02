/*
Chef is watching a football match. The current score is A:B, that is, team 1 has scored A goals and team 2 has scored B goals. Chef wonders if it is possible for the score to become C:D at a later point in the game (i.e. team 1 has scored C goals and team 2 has scored D goals). Can you help Chef by answering his question?

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers A and B - the intial number of goals team 1 and team 2 have scored respectively.
The second line of each test case contains two integers C and D - the final number of goals team 1 and team 2 must be able to score respectively.
Output Format
For each testcase, output POSSIBLE if it is possible for the score to become C:D at a later point in the game, IMPOSSIBLE otherwise.

You may print each character of POSSIBLE and IMPOSSIBLE in uppercase or lowercase (for example, possible, pOSsiBLe, Possible will be considered identical).

Constraints
1≤T≤1000
0≤A,B,C,D≤10
Sample Input 1 
3
1 5
3 5
3 4
2 6
2 2
2 2
Sample Output 1 
POSSIBLE
IMPOSSIBLE
POSSIBLE
Explanation
Test case 1: The current score is 1:5. If team 1 scores 2 more goals, the score will become 3:5. Thus 3:5 is a possible score.

Test case 2: The current score is 3:4. It can be proven that no non-negative pair of integers (x,y) exists such that if team 1 scores x more goals and team 2 scores y more goals the score becomes 2:6 from 3:4. Thus in this case 2:6 is an impossible score.

Test case 3: The current score is already 2:2. Hence it is a possible score.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a<=c && b<=d)
	    cout<<"POSSIBLE"<<endl;
	    else
	    cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}
