#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,a[10001];
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count=0,first=-1,last;
        for(int i=0;i<n;i++)
        {
            if(a[i]==k)
            {
                count++;
                if(first==-1)
                {
                    first=i;
                }
                last=i;
            }
        }
        if(count==0)
        {
            printf("NO\n");
        }
        else if(count>=2&&last-first>=2)
        {
            printf("YES\n");

        }
        else if(count>=1&&n==1)
        {
            printf("YES\n");

        }
        else if(count>=2||(count==1&&first<n-1))
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
           
    }
    
}