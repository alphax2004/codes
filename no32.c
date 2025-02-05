#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqrtn,isprime=1;
    sqrtn=sqrt(n);
    if(n<2)
    {
        isprime=0;
        break;
    }
    else{
        for(int i=2;i*i<=sqrtn;i++)
        {
            if(sqrtn%i==0)
            {
                isprime=0;
            }
        }
    }
    if(isprime==1)
    {
        printf("prime");
    }
    else{
        printf("not prime");
    }
}
// WAP to check whether square root of a number is prime or not.