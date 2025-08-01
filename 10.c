#include <stdio.h>
#include <string.h>

int main() 
{
    int n,h;
    scanf("%d %d",&n,&h);
    int a;
    int height=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d" ,&a);
        if(a<=h)
        {
            height=height+1;
        }
        else
        {
            height=height+2;
        }
    }
    printf("%d",height);

}