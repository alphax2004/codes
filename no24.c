#include<stdio.h>
#include<math.h>
int main()
{
    int unit,bill;
    scanf("%d",&unit);
    switch(unit/100)

    {
        case 0:
        bill=unit*5;
        break;
        case 1: case 2:
        bill=unit*10;
        break;
        case 3: case 4: case 5:
        bill=unit*15;
        break;
        default:
        bill=unit*20;
        break;

    }
    printf("%d",bill);

}/*
: Electricity Bill Calculator
Question:
Write a C program to calculate the electricity bill based on the number of units consumed using switch-case. 
The rates are as follows:
•	0-100 units: 5 Taka per unit
•	101-300 units: 10 Taka per unit
•	301-500 units: 15 Taka per unit
•	501+ units: 20 Taka per unit
1.	Take an integer (units) as input from the user.
2.	Use switch-case to calculate and display the total bill
*/