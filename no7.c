#include<stdio.h>
#include<math.h>
int main()
{
    int d,w,y,remain;
    scanf("%d",&d);
    y=d/365;
    w=(d%365)/7;
    remain=(d%365)%7;
    printf("%d %d %d ",y,w,remain);
}
//convert days into years,weeks,days
