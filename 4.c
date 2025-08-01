#include<stdio.h>
#include<math.h>


int main()
{
    long long k,n,w;
    scanf("%lld %lld %lld",&k,&n,&w);
    long long tk=k * w * (w + 1) / 2;
    
        long long require=tk-n;
        if(require<0)
        {
            require=0;
        }

    
    printf("%lld",require);
}