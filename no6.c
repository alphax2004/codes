#include <stdio.h>
#include<math.h>
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,x,y;
	    scanf("%d %d%d %d",&a,&b,&x,&y);
	    
	    int d1=(a*a+b*b);
	    int d2=(x*x+y*y);
	    if(d2>d1)
	    {
	        printf("BOB\n");
	    }
	    else if(d1==d2)
	    {
	        printf("EQUAL\n");
	    }
	    else
	    {
	        printf("ALEX\n");
	    }
	    
	}

}

