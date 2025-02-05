#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,l,r,count=0,gced;
   scanf("%d %d %d %d",&a,&b,&l,&r);
   for (int i=l;i<=r;i++)
   {
    if(a%i==0&&b%i==0&&i%2==0)
    {
        gced=i;
    }
   }
   printf("%d",gced);
}
    