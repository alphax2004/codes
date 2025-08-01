#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,remainder,original;
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
       remainder=n%10;
       sum=sum+pow(remainder,n);
       n=n/10;
    }
    if(sum=original)
    {
        printf("armstrong number");
    }
    else{
        printf("not armstrong number");
    }
}
/* print whether a no is armstrong or not
armstrong no=
153=(1*1*1)+(3*3*3)+(5*5*5)
*/