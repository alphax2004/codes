#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char op;
    scanf("%c",&op);
    switch(op)
    {
        case '+':
        printf("%d+%d=%d",a+b);
        break;
        case '-':
        printf("%d-%d=%d",a-b);
        break;
        case '*':
        printf("%d*%d=%d",a*b);
        break;
        case '/':
        printf("%d/%d=%d",a/b);
        break;
        default:
        printf("invalid");
        

        
    }

}