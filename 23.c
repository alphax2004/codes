#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001],b[10001];
    scanf("%s %s",a,b);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        if(a[i]!=b[i])
        {
            printf("1");
        }
        else{
            printf("0");
        }
        
    }
    printf("\n");
    

    

}