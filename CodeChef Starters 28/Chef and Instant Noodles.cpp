/*
Chef has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 1 minute to cook.

Chef's restaurant has X stoves and only 1 packet can be cooked in a single pan.

How many customers can Chef serve in Y minutes if each customer orders exactly 1 packet of noodles?

Input Format
The first and only line of input contains two space-separated integers X and Y — the number of stoves and the number of minutes, respectively.
Output Format
Print a single integer, the maximum number of customers Chef can serve in Y minutes
Constraints
1≤X,Y≤1000
Sample Input 1 
3 7
Sample Output 1 
21
Explanation
Chef cooks for Y=7 minutes and can cook X=3 packets per minute, one on each stove.

So, the total number of packets that can be cooked is X⋅Y=3⋅7=21.

Each person orders one packet, so the maximum number of customers that can be served is 21.

Sample Input 2 
7 8
Sample Output 2 
56
Explanation
Chef cooks for Y=8 minutes and can cook X=7 packets per minute, one on each stove.

So, the total number of packets that can be cooked is X⋅Y=7⋅8=56.

Each person orders one packet, so the maximum number of customers that can be served is 56.
*/

#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    cout<<x*y;
	return 0;
}
