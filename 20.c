#include<stdio.h>
int main()
{
    int p[10001],res[10001];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
        res[p[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",res[i]);
    }
}