#include <stdio.h>
/* main function starts from here*/
void main()
{
  int array_two[5][6]; /* declaration of 2 Dimensional array for 20 by 20 integer numbers*/
  int i,j;
/* declaration and initialization of 2 dimensional array at compile time*/
  int array_one[4][5] = {
    {10, 12, 18, 33, 12},
    {11, 45, 66, 76, 32},
    {12, 34, 43, 56, 67},
    {35, 45, 65, 67, 32}
    };
printf("Elements from array 1:\n");
  for(i=0;i<4;i++) /* this loop is used for 5 rows*/
  {
      for(j=0;j<5;j++) /* this loop is used for 6 columns*/
      {
         printf("%d ",array_one[i][j]);
      }
      printf("\n");
  }
/* initialization of 2 dimensional array at run time (from user input)*/
  printf("\nEnter the elements of array 2 (5 rows and 6 columns): ");
  for(i=0;i<5;i++) /* this loop is used for 5 rows*/
  {
      for(j=0;j<6;j++) /* this loop is used for 6 columns*/
      {
         scanf("%d ",&array_two[i][j]);
      }
  }
  /* print elements of array*/

  printf("\nElements from array 2:\n");
  for(i=0;i<5;i++) /* this loop is used for 5 rows*/
  {
      for(j=0;j<6;j++) /* this loop is used for 6 columns*/
      {
         printf("%d ",array_two[i][j]);
      }
      printf("\n");
  }
}
