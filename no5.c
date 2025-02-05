#include <stdio.h>

int main() {
	// your code goes here

	
	     int n,lucky=0,unlucky=0;
	     scanf("%d",&n);
	     for(int i=1;i<=n;i++)
	     {
	         int w;
	         scanf("%d",&w);
	         if(w%2==0)
	         {
	             lucky++;
	         }
	         else{
	             unlucky++;
	         }
	         
	     }
	     if(lucky>unlucky)
	     {
	         printf("READY FOR BATTLE\n");
	     }
	     else{
	         printf("NOT READY");
	     }
	
	

}

/*
Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky" if 
the soldier is 
holding an even number of weapons, and "unlucky" otherwise. He considered 
the army as "READY FOR BATTLE" if
 the count of "lucky" soldiers is strictly greater than the count of "unlucky" soldiers,
  and "NOT READY" otherwise.
Given the number of weapons each soldier is holding, your task is to determine whether 
the army formed by all 
these soldiers is "READY FOR BATTLE" or "NOT READY".
Input Format
The first line of input consists of a single integer N denoting the number of soldiers.
 The second line of input consists of N space separated integers A1, A2, ..., AN, where Ai denotes the number
  of weapons that the ith soldier is holding.

Output Format
Generate one line output saying "READY FOR BATTLE", if the army satisfies the conditions that 
Kattapa requires or "NOT READY" otherwise (quotes for clarity).


Sample 1
Inputcopy	Outputcopy
1
1
NOT READY
Example 1: For the first example, N = 1 and the array A = [1]. There is only 1 soldier and he
 is holding 1 weapon, which is odd. The number of soldiers holding an even number of weapons = 0,
  and number of soldiers holding an odd number of weapons = 1. Hence, the answer is "NOT READY" since the number of 
  soldiers holding an even number of weapons is not greater than the number of soldiers holding an odd number of weapons.
Sample 2
Inputcopy	Outputcopy
1
2
READY FOR BATTLE
Example 2: For the second example, N = 1 and the array A = [2]. There is only 1 soldier and he is holding 2 weapons, which is even. The number of soldiers holding an even number of weapons = 1, and number of soldiers holding an odd number of weapons = 0. Hence, the answer is "READY FOR BATTLE" since the number of soldiers holding an even number of weapons is greater than the number of soldiers holding an odd number of weapons.
Sample 3
Inputcopy	Outputcopy
4
11 12 13 14
NOT READY
Example 3: For the third example, N = 4 and the array A = [11, 12, 13, 14]. The 1st soldier is holding 11 weapons (which is odd), the 2nd soldier is holding 12 weapons (which is even), the 3rd soldier is holding 13 weapons (which is odd), and the 4th soldier is holding 14 weapons (which is even). The number of soldiers holding an even number of weapons = 2, and number of soldiers holding an odd number of weapons = 2. Notice that we have an equal number of people holding even number of weapons and odd number of weapons. The answer here is "NOT READY" since the number of soldiers holding an even number of weapons is not strictly greater than the number of soldiers holding an odd number of weapons.
Sample 4
Inputcopy	Outputcopy
3
2 3 4
READY FOR BATTLE
Example 4: For the fourth example, N = 3 and the array A = [2, 3, 4]. The 1st soldier is holding 2 weapons (which is even), the 2nd soldier is holding 3 weapons (which is odd), and the 3rd soldier is holding 4 weapons (which is even). The number of soldiers holding an even number of weapons = 2, and number of soldiers holding an odd number of weapons = 1. Hence, the answer is "READY FOR BATTLE" since the number of soldiers holding an even number of weapons is greater than the number of soldiers holding an odd number of weapons.
Sample 5
Inputcopy	Outputcopy
5
1 2 3 4 5
NOT READY
Example 5: For the fifth example, N = 5 and the array A = [1, 2, 3, 4, 5]. The 1st soldier is holding 1 weapon (which is odd), the 2nd soldier is holding 2 weapons (which is even), the 3rd soldier is holding 3 weapons (which is odd), the 4th soldier is holding 4 weapons (which is even), and the 5th soldier is holding 5 weapons (which is odd). The number of soldiers holding an even number of weapons = 2, and number of soldiers holding an odd number of weapons = 3. Hence, the answer is "NOT READY" since the number of soldiers holding an even number of weapons is not greater than the number of soldiers holding an odd number of weapons.
*/