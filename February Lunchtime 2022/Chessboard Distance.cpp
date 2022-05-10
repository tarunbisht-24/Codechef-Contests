/*
The Chessboard Distance for any two points (X1,Y1) and (X2,Y2) on a Cartesian plane is defined as max(|X1−X2|,|Y1−Y2|).

You are given two points (X1,Y1) and (X2,Y2). Output their Chessboard Distance.

Note that, |P| denotes the absolute value of integer P. For example, |−4|=4 and |7|=7.

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input containing 4 space separated integers - X1,Y1,X2,Y2 - as defined in the problem statement.
Output Format
For each test case, output in a single line the chessboard distance between (X1,Y1) and (X2,Y2)
Constraints
1≤T≤1000
1≤X1,Y1,X2,Y2≤105
Subtasks
Subtask #1 (100 points): original constraints

Sample Input 1 
3
2 4 5 1
5 5 5 3
1 4 3 3
Sample Output 1 
3
2
2
Explanation
In the first case, the distance between (2,4) and (5,1) is max(|2−5|,|4−1|)=max(|−3|,|3|)=3.

In the second case, the distance between (5,5) and (5,3) is max(|5−5|,|5−3|)=max(|0|,|2|)=2.

In the third case, the distance between (1,4) and (3,3) is max(|1−3|,|4−3|)=max(|−2|,|1|)=2.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    cout<<max(abs(x1-x2),abs(y1-y2))<<endl;
	}
	return 0;
}
