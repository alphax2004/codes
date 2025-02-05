#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit,reverse=0;
    scanf("%d",&n);
    // while(n!=0)
    // {
    //     digit=n%10;
    //     reverse=reverse*10+digit;
    //     n=n/10;

    // }
    while(n>0)
    {
        digit=n%10;
        n=n/10;
        switch(digit)
    {
        case 0:
        printf("zero\n");
        break;
        case 1:
        printf("one\n");
        break;
        case 2:
        printf("two\n");
        break;
        case 3:
        printf("three\n");
        break;
        case 4:
        printf("four\n");
        break;
        case 5:
        printf("five\n");
        break;
        case 6:
        printf("six\n");
        break;
        case 7:
        printf("seven\n");
        break;
        case 8:
        printf("eight\n");
        break;
        case 9:
        printf("nine\n");
        break;
        default:
        printf("invalid\n");
    }
    }
    
}
// If a number 972 is entered through the keyboard, your program should print “Nine Seven Two”. Write the 
//program such that it does this for any positive integers.