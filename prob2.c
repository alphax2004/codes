#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(k>=a[i])
	        {
	            k=k-a[i];
	            printf("1");
	        }
	        else
	        {
	            printf("0");
	        }
	        
	    }
	    printf("\n");
	}

}

/*
There is an ATM machine. Initially, it contains a total of K
K units of money. 
N
N people (numbered 
1
1 through 
N
N) want to withdraw money; for each valid 

The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.

For each person, determine whether they will get the required amount of money or not.

Input
The first line of the input contains a single integer T
T denoting the number of test cases. The description of T
T test cases follows.
The first line of each test case contains two space-separated integers N
N and K
K.
The second line contains N
N space-separated integers 

Output
For each test case, print a single line containing a string with length 
N
N. For each valid 
i
i, the 
i
i-th character of this string should be '1' if the 
i
i-th person will successfully withdraw their money or '0' otherwise.
Sample 1:
Input
Output
2
5 10
3 5 3 2 1
4 6
10 8 6 4
11010
0010
Explanation:
Example case 1: The ATM machine initially contains 
10
10 units of money. The first person comes and withdraws 
3
3 units, so the amount remaining in the machine is 
7
7. Then the second person withdraws 
5
5 units and the remaining amount is 
2
2. The third person wants to withdraw 
3
3 units, but since there are only 
2
2 units of money in the machine, it throws an error and the third person must leave without getting anything. Then the fourth person withdraws 
2
2 units, which leaves nothing in the machine, so the last person does not get anything.
*/