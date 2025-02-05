#include<stdio.h>
#include<math.h>
int main()
{
    int r,choice;
    scanf("%d %d",&r,&choice);
     if(choice==1)
     {
        float area=3.14*r*r;
        printf("%f",area);
     }
     if(choice==2)
     {
        float circumferance=2*3.14*r;
        printf("%f",circumferance);
     }
     
}










//WAP to input choice (1 or 2). If choice is 1 print the area of a circle otherwise print the circumference of circle. 
//Input the radius from user