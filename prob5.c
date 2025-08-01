
#include<stdio.h>

int main()
{
    long long int n,k,x,count=0;
    scanf("%lld %lld",&n,&k);
    while(n--)
    {
      scanf("%lld",&x);
        if(x%k==0)
       {
        count++;
        
        }
    }
    
    printf("%d",count);
    
}

/*
Enormous Input Test
You are given 
N
N integers. Find the count of numbers divisible by 
K
K.

Input Format
The input begins with two positive integers 
N
N, 
K
K. The next 
N
N lines contains one positive integer each denoted by 
A
i
A 
i
​
 .

Output Format
Output a single number denoting how many integers are divisible by 
K
K.
Sample 1:
Input
Output
7 3
1
51
966369
7
9
999996
11
4
Explanation:
The integers divisible by 
3
3 are 
51
,
966369
,
9
,
51,966369,9, and 
999996
999996. Thus, there are 
4
4 integers in total.
*/