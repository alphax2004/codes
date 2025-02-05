#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
{
    int a,b,c,max2;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b&&a<c)||(a>c&&a<b))
{
    max2=a;
}
else if((b>a&&b<c)||(b>c&&b<a))
{
    max2=b;
}
else
{
    max2=c;
}
printf("%d\n",max2);
}

}

//print secnd largest no.