#include <stdio.h>
#include <string.h>

int main() 
{
    int n,current=0,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        current-=a;
        current+=b;
        if(current>max)
        {
            max=current;
        }
    }
    printf("%d",max);

}