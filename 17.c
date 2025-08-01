#include <stdio.h>
#include <string.h>

int main()
{
    int n,count=1;
    char a[100],b[100];
    scanf("%d",&n);
    scanf("%s",a);
    for (int i=1;i<n;i++)
    {
        scanf(" %s",b);
        if(strcmp(a,b)!=0)
        {
            count++;
        }
        strcpy(a,b);
    }
    printf("%d\n",count);
}