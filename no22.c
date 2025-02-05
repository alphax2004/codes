#include<stdio.h>
#include<math.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    switch(marks/10)
    {
       case 9: case 10:
       printf("a");
       break;
       case 8:
       printf("b");
       break;
       case 7:
       printf("c");
       break;
       case 6:
       printf("d");
       break;
       case 5: case 4:
       case 3: case 2:
       case 1: case 0:
       printf("fail");
       default:
       printf("invalid");

    }
}