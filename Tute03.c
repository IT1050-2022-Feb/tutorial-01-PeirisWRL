/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */
#include <stdio.h>
int main() {

  //declairing variables
  int n , i , total = 0 ;

  //getting keyboard inputs
  printf("Enter the n value : ");
  scanf("%d" , &n);

  //calculate the sum
  for(i=0 ; i<=n ; i++)
  {
    total = total + i ;
  }

  //display output
  printf("Total : %d" , total);

  return 0;
}

