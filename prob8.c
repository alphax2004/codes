#include<stdio.h>
#include<string.h>
int main ()
{
    char d[3];
    scanf("%s",d);
    if(strcmp(d,"N")==0)
    {
        printf("S\n");
    }
    if(strcmp(d,"E")==0)
    {
        printf("W\n");
    }
    if(strcmp(d,"SE")==0)
    {
        printf("NW\n");
    }
    if(strcmp(d,"NE")==0)
    {
        printf("SW\n");
    }

return 0;

}
//atcoder beginner contest problem with string
//if direction is north,south,east,west,se,ne,sw,nw
//then print opposite direction
//strcmp = to sompare two string