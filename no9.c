#include<stdio.h>
#include<math.h>
int main()
{
    int d,w,m,y,remaindays;
    scanf("%d",&d);
    y=d/365;
    m=(d%365) /30;
    w=((d%365)%30) / 7;
    remaindays=((d%365) %30)%7;
    printf("%d %d %d %d",y,m,w,remaindays);
}
//convert days to weeks months years