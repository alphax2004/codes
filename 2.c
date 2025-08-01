#include<stdio.h>


int main()
{
    int n,count=0;
    char s[50];
    scanf("%d %s",&n,s);
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
    }
    printf("%d",count);

}