// #include<stdio.h>
// #include<math.h>
// int main()
// {
//   int x,moves=0;
//   scanf("%d",&x);
//   while(x>0)
//   {
//     if(x%2==0)
//     {
//         x=x/2;
//     }
//     else if(x==1)
//     {
//       x=x-1;
//     }
//     else{
//         x=x-1;
//     }
//     moves++;
//   }
//   printf("%d",moves);
// }
/*
Problem 9: Step Reduction Game
You have x steps to reduce to zero. In each move, you can:

Subtract 1
Divide by 2 (only if the number is even)
Find the minimum number of moves to reach zero.
Sample Input 1: 10
Sample Output 1: 4

Sample Input 2: 7
Sample Output 2: 5

*/
#include <stdio.h>
int main() {
    int x, moves = 0;
    scanf("%d", &x);
   
      while (x > 0) {
        if (x == 1) {  
            x -= 1;  // Final move when x == 1
        } else if (x % 2 == 0) {  
            x /= 2;  // If even, divide by 2
        } else {  
            x -= 1;  // If odd, subtract 1
        }
        moves++;
    }
    printf("%d\n", moves);
    return 0;
}
