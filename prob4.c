#include <stdio.h>

int main() {
	// your code goes here
	int x;
	float y;
	scanf("%d %f",&x,&y);
	float tk;
	if(x%5==0&&(x+0.5)<=y)
	{
	    tk=y-x-0.5;
	    printf("%0.2f",tk);
	}
	else
	{
	    printf("%0.2f",y);
	}

}

/*
ATM
Pooja would like to withdraw X US Dollar from an ATM. 
The cash machine will only accept the transaction if X is a multiple of 5,
 and Pooja's account balance has enough cash to perform the withdrawal
  transaction (including bank charges). For each successful withdrawal
   the bank charges 0.50 US Dollar.

Calculate Pooja's account balance after an attempted transaction.

Input Format
Each input contains 2 numbers 
X
X and 
Y
Y.
X
X is the amount of cash which Pooja wishes to withdraw.
Y
Y is Pooja's initial account balance.

Output Format
Output the account balance after the attempted transaction,
 given as a number with two digits of precision. If there is not
  enough money in the account to complete the transaction, 
  output the current bank balance.
  input

30 120.00
Output
89.50
Explanation:
Example - Successful Transaction
*/