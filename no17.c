#include<stdio.h>
int main()
{
    int a=4,b=9;
    //scanf("%d %d",&a,&b);
    printf("%d %d\n",a,b);
   for(int n=a+1;n<b;n++)
   {
    
    printf("%d ",n);

   }
   for(int n=b-1;n>a;n--)
   {
    printf("%d ",n);
   }
   
    
    
}












//WAP to swap the values of two integer variables 
//(a) Using extra variable 
//(b) Without using extra variable