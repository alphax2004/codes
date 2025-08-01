#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main()

{
    int n,flag=0;
    int x,a;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a);
    }
    int y,b;
    scanf("%d",&y);
    for(int i=0;i<y;i++)
    {
        scanf("%d",&b);
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if((a==n)||(b==n))
            {
                flag=1;
                break;
            }
            
        }
    }
    if(flag==0)
    {
        printf("Oh, my keyboard!\n");
    }
    else
    {
        printf("I become the guy.\n");
    }
}