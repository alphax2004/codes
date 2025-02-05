#include<stdio.h>
#include<math.h>
int main()
{
    int temperature;
    scanf("%d",&temperature);
    switch(temperature/10)
    {
        case -5: case -4: case -3: case -2: case -1:
        printf("freezing");
        break;
        case 0:
        if(temperature>=0)
        {
            printf("very cold");
        }
        break;
        case 1:
        printf("cold");
        break;
        case 2:
        printf("cool");
        break;
        case 3:
        printf("warm");
        break;
        case 4:
        case 5:
        printf("hot");
        break;
        default:
        printf("invalid temperature");

    }
}/*
Write a C program to categorize temperatures using switch-case.
The program should:
1.	Take an integer temperature (temp) as input from the user.
2.	Categorize the temperature into the following ranges:
o	-50 to -1: "Freezing"
o	0 to 9: "Very Cold"
o	10 to 19: "Cold"
o	20 to 29: "Cool"
o	30 to 39: "Warm"
o	40 to 50: "Hot"
3.	If the temperature is outside the range -50 to 50, print "Invalid Temperature
*/