/*
Alice has recently learned in her economics class that the market is said to be in equilibrium when the supply is equal to the demand.

Alice has market data for $N$ time points in the form of two integer arrays $S$ and $D$. Here, $S_i$ denotes the supply at the $i^{th}$ point of time and $D_i$ denotes the demand at the $i^{th}$ point of time, for each $1 \leq i \leq N$.

Help Alice in finding out the number of time points at which the market was in equilibrium.

Input Format
The first line of input will contain an integer $T$ — the number of test cases. The description of $T$ test cases follows.
Each test case contains three lines of input.
The first line of each test case contains an integer $N$, the length of the arrays $S$ and $D$.
The second line of each test case contains $N$ space-separated integers $S_1, S_2, \ldots , S_N$.
The third line of each test case contains $N$ space-separated integers $D_1, D_2, \ldots , D_N$.
Output Format
For each test case, output the number of time points at which the market was in equilibrium.

Constraints
$1 \leq T \leq 10$
$1 \leq N \leq 100$
$1 \leq S_i, D_i \leq 100$ for every $1 \leq i \leq N$
Sample Input 1 
2
4
1 2 3 4
2 1 3 4
4
1 1 2 2
1 2 1 1
Sample Output 1 
2
1
Explanation
Test case $1$: For $i = 3$ and $i = 4$, we have supply equal to demand, hence the market is in equilibrium.

Test case $2$: For $i = 1$, we have supply equal to demand, hence the market is in equilibrium.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=0,b=0,cnt=0;
	    cin>>n;
	    int *arr1 = new int[n];
	    int *arr2 = new int[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	    }
	    
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr2[j];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr1[a]==arr2[b])
	        {
	        cnt++;
	        a++;
	        b++;
	        }
	        else
	        {
	           a++;
	           b++;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
