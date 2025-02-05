#include<stdio.h>
#include<math.h>
int main()
{
    int y,m,w,d;
    scanf("%d",&y);
    m=y*12;
    w=y*52;
    d=y*365;
    printf("%d %d %d %d",y,m,w,d);
}
//years to months,days,weeks