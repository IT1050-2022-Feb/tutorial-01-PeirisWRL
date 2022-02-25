/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  //declairing variables
  int distance ;
  float amount ;

  // getting keyboard inputs
  printf("Enter the driven distance : ");
  scanf("%d" , &distance);

  //calculate amount
  if( distance < 30)
  {
    amount = distance * 50.0 ;
    printf("Amount : %.2f" , amount);
  }

  else if(distance >= 30)
  {
    amount = (50.0 * 30.0) + (distance-30.0)*40.0;
    printf("Amount : %.2f" , amount);
  }
  return 0;
}