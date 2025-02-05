#include<stdio.h>
#include<math.h>
int main()
{
    int g,s;
    scanf("%d %d",&g,&s);
    while((g>=3&& s>=5))
    {
        if(g>=3)
        {
            g-=3;
            s+=1;
        }
        else if(s>=5)
        {
            s-=5;
            g+=2;
        }
    }
    if(g==0 && s==0)
    {
        printf("yes\n");
    }
    else{
        printf("no");
    }
}

/*
You have gold coins and silver coins.
 In each move, you can exchange either 3 gold coins
  for 1 silver coin or 5 silver coins for 2 gold coins.
   Can you exhaust all the coins?	
Sample Input 1:	Sample Output 1:
9 6	Yes
Sample Input 2:	Sample Output 2:
10 3	No

*/