#include <stdio.h>
#include <string.h>

int main() {
    char s[10001],temp[10001],s2[10001];
    scanf("%s %s", s,s2);  

    int len = strlen(s2);
    
    for(int i = 0; i <len; i++) 
    {
        temp[i]=s2[len-1-i];
    }
    temp[len]='\0';
    if (strcmp(s, temp) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    
    return 0;
}
