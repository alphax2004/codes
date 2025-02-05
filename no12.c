#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,quotient,remainder;
    scanf("%d %d",&a,&b);
    quotient=a/b;
    remainder=a-(quotient*b);
    printf("%d %d",quotient,remainder);

}
//WAP to find out the quotient and remainder of two numbers. (without using modulus (%) operator)