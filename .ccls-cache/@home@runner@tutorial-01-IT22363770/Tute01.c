/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int sub1, sub2, tot;
  float avg;

  // getting marks for two subjects
  printf("Enter the first mark:");
  scanf("%d", &sub1);

  printf("Enter the second mark:");
  scanf("%d", &sub2);

  tot = sub1 + sub2;
  avg = tot / 2;

  // print the average of two marks
  printf("Average is %.2f", avg);

  return 0;
}
