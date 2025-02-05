#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int sum=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}
//find all perfect number between two number