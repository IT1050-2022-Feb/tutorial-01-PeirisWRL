/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //declairing variables
  int mark1 , mark2 ;
  float avg ;

  //getting keyboard inputs
  printf("Enter Mark 1 : ");
  scanf("%d" , &mark1);
  printf("Enter Mark 2 : ");
  scanf("%d" , &mark2);

  //calculate the average
  avg = (mark1+mark2)/2.0;

  //display the output
  printf("Average : %.2f" , avg);

  
  return 0;
}