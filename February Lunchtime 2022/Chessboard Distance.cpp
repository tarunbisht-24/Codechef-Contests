/*
Chef started watching a movie that runs for a total of X minutes.

Chef has decided to watch the first Y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets interesting only after the first Y minutes.

How long will Chef spend watching the movie in total?

Note: It is guaranteed that Y is even.

Input Format
The first line contains two space separated integers X,Y - as per the problem statement.
Output Format
Print in a single line, an integer denoting the total number of minutes that Chef spends in watching the movie.
Constraints
1≤X,Y≤1000
Y is an even integer.
Subtasks
Subtask #1 (100 points): original constraints

Sample Input 1 
100 20
Sample Output 1 
90
Explanation
For the first Y=20 minutes, Chef watches at twice the usual speed, so the total amount of time spent to watch this portion of the movie is Y2=10 minutes.

For the remaining X−Y=80 minutes, Chef watches at the usual speed, so it takes him 80 minutes to watch the remaining portion of the movie.

In total, Chef spends 10+80=90 minutes watching the entire movie.
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
