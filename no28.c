#include<stdio.h>
#include<math.h>
int main()
{
     int n,found=0;
     scanf("%d",&n);
     for(int x=1;x<n;x++)
     {
        int y=n-x;
        if(x==y)
        {
            found=1;
            break;
        }
        
     }
     if(found==1)
     {
        printf("yes");
     }
     else{
        printf("no");
     }
     
}
/*
You have n coins. Can you split them into two
 equal groups where each group has the same number of coins?
Sample Input 1: 12
Sample Output 1: Yes

Sample Input 2: 5
Sample Output 2: No
*/