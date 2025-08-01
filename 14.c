#include<stdio.h>
int main()

{
    int a[10001],n,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
           flag=1;
        }
        
    }
    if(flag==1)
    {
        printf("HARD\n");
    }
    else{
        printf("EASY\n");
    }
}