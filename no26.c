#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int found=0;
    
    //while(n>=4){
for(int x=1;x<n;x++)
    {
        int found=0;
        int y=n-x;
        if(n>=4)
        {
            if((x*y)%4==0){
            found=1;
            break;
            }
            
        }
    
    }
    //}
       
    if(found==1)
    {
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    

}
/*
02	You have n tickets. Can you divide them into two groups such
 that the product of the number of tickets in each group is divisible by 4?	
Sample Input 1:	Sample Output 1:
8	Yes
Sample Input 2:	Sample Output 2:
5	No
*/