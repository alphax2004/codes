#include<stdio.h>
int main()
{
    
    double a,sum=0,vf;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a);
        sum+=a;
    }
    
    vf=sum/n;
    printf("%.12lf\n",vf);
}