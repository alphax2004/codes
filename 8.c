#include <stdio.h>
#include <string.h>

int main() {
    int a;
    char n[100001]; 
    scanf("%d %s",&a ,n);

    int count = 0;
    for (int i = 0; n[i] != '\0'; i++)
     {
        if (n[i] >='a' && n[i] <= 'z') {
            n[i]-=32;
        }
    }
    int c1=0,c2=0;

    // check if count itself is lucky
    for (int i = 0; n[i] != '\0'; i++)
     {
        if (n[i] =='A') {
            c1++;
        }
        if(n[i]=='D')
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        printf("Anton\n");
    }
    else if(c1==c2)
    {
        printf("Friendship\n");
    }
    else{
        printf("Danik\n");
    }
    

    return 0;
}
