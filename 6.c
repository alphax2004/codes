#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    while(k--)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    printf("%lld",n);
}