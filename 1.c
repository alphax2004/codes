#include<stdio.h>


int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int yr=0;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        yr++;
    }
    printf("%d",yr);
}