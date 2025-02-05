#include<stdio.h>
#include<math.h>
int main()
{
   int inches,yard,feet;
   scanf("%d",&inches);
   feet=inches/12;
   yard=inches/36;
   printf("%d %d",feet,inches);
}
//WAP to input inches from the user and convert 
//it into yards, feet and inches.