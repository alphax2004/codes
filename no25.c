#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1,nextterm;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        nextterm=a+b;
        a=b;
        b=nextterm;
        //printf("%d ",nextterm);
    }
    
}
// fibonacci number