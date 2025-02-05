#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit,reverse=0;
    scanf("%d",&n);
    int original=n;
    while(n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(reverse==original)
    {
        printf("palindrome=%d",reverse);
    }
    else{
        printf("not palindrome");
    }
}
//palindrome