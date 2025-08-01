#include<stdio.h>
int main()
{
    int t,count=0,flag=0;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if(a%b==0)
        {
            printf("0\n");
            flag=1;
        }
        else{
            printf("%lld\n",b-(a%b));
            flag=0;
        }
        
    }

}