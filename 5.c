#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int c1=0,c2=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            c1++;
        }
        if(s[i]>='a'&&s[i]<='z')
        {
            c2++;
        }
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(c1>c2)
        {
            s[i] = toupper(s[i]);
        }
        else if(c1<c2)
        {
            s[i] = tolower(s[i]);
        }
    }
    printf("%s",s);
}