#include <stdio.h>

int main() {
	// your code goes here
	int t,sum=0;
	scanf("%d",&t);
	while(t--)
	{
	    int n,digit,sum=0;
	    scanf("%d",&n);
	    while(n!=0)
	    {
	    digit=n%10;
	    sum=sum+digit;
	    n=n/10;
	    }
	    
	    printf("%d\n",sum);
	}
	

}

/*
Sum of Digits
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input Format
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output Format
For each test case, calculate the sum of digits of N, and display it in a new line.

Input
3 
12345
31203
2123
Output

15
9
8*/