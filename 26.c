#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main()

{
    int i,n,letter[26]={0};
    scanf("%d",&n);
    char ch;
    for (i=0;i<n;i++)
    {
        scanf("%c",&ch);
        char ch=tolower(ch);
        if(ch>='a'&&ch<='z')
        {
            letter[ch-'a']=1;
        }
    }
    for(i=0;i<26;i++)
    {
        if(letter[i]==0)
        {
            printf("NO\n");
            break;
        }
        else{
            printf("YES\n");
            break;
        }
        
    }

       
    
}