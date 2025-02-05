#include <stdio.h>

int main() {
	// your code goes here
      int t;
      scanf("%d",&t);
      while(t--)
      {
          long long int n;
          scanf("%lld",&n);
          int power=0;
          
               while(n>0&&n%2==0)
           {
              
              power++;
              n=n/2;
          }
          if(power%2==0)
          {
              printf("1\n");
          }
          else{
              printf("0\n");
          }
          
      
         
          
      }
}

//if n divided by 2, power of 2 increases by 1,if power divided by 2,then lucky no.