#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n,fact=1;
	    scanf("%lld",&n);
	    for(int i=1;i<=n;i++)
	    {
	        fact=fact*i;
	        
	    }     // for large no. factorial 16 long long int is used so that overflow does not occur
	    printf("%lld\n",fact);
	}

}

//factorial of a no. including large no. 16,24,36