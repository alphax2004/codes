#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int reverse=0,digit;
	    int original=n;
	    while(n!=0)
	    {
	        digit=n%10;
	        reverse=reverse*10+digit;
	        n=n/10;
	   
	    }
	    if(reverse==original)
	    {
	        printf("wins\n");
	    }
	    else
	    {
	        printf("loses\n");
	    }
	    
	}

}

//if a no is palindrome
/* palindrome =no  =      121
       reverse      =     121
*/