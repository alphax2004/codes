#include<stdio.h>
int main()
{
    int a[100001],count=0;
    //scanf("%d",&n);
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
    

    
}