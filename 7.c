#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
    long long n,count=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        if(i%10==4||i%10==7||i/10==4||i%10==7)
        {
            count++;
        }
    }
    if(count==4||count==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}