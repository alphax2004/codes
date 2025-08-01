#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n,reverse=0,digit;
	    scanf("%lld",&n);
	    while(n>0)
	    {
	        digit=n%10;
	        reverse=reverse*10+digit;
	        n=n/10;
	    }
	    printf("%lld\n",reverse);
	}

}

//reverse a no. some examples include large no=1234567892345667
//thats why long long int is used