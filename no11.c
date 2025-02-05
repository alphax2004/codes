#include<stdio.h>
#include<math.h>
int main()
{
    int n,firstdigit,lastdigit;
    scanf("%d",&n);
    lastdigit=n%10;
    firstdigit=n;
    while(firstdigit>=10){

        firstdigit=firstdigit/10;
        
    }
    int middle;
    middle=(n/10)%10000;
    printf("%d%d%d",lastdigit,middle,firstdigit);
}

