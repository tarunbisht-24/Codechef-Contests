/*
Janmansh and Jay are playing a game. They start with a number X and they play a total of Y moves. Janmansh plays the first move of the game, after which both the players make moves alternatingly.

In one move, a player can increment or decrement X by 1.

If the final number after performing Y moves is even, then Janmansh wins otherwise, Jay wins. Determine the winner of the game if both the players play optimally.

Input Format
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers X, Y - the starting number and the total number of moves respectively.
Output Format
For each test case, output the winning player (Janmansh or Jay).

You may print each character of Janmansh and Jay in uppercase or lowercase (for example, JAY, jaY, JAy will be considered identical).

Constraints
1≤T≤100
1≤X,Y≤100
Sample Input 1 
2
2 2
4 3
Sample Output 1 
Janmansh
Jay
Explanation
Test case-1: The starting number is X=2. One of the optimal games will be:

In the first move, Janmansh increases X to 3.
In the second move, Jay increases X to 4.
Since the final number is even, Janmansh wins.

Test case-2: The starting number is X=4. One of the optimal games will be:

In the first move, Janmansh decreases X to 3.
In the second move, Jay decreases X to 2.
In the third move, Janmansh increases X to 3.
Since the final number is odd, Jay wins.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if((x+y)&1)
	    cout<<"Jay"<<endl;
	    else
	    cout<<"Janmansh"<<endl;
	}
	return 0;
}
