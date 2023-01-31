#include <stdio.h>
/* main function starts from here*/
void main()
{
  char array_[5][5]; /* declaration of 2 Dimensional array for 20 by 20 integer numbers*/
int i,j;

/* initialization of 2 dimensional array at run time (from user input)*/
  printf("\nEnter the elements of array  (5 rows and 5 columns): ");
  for(i=0;i<5;i++) /* this loop is used for 5 rows*/
  {
      for(j=0;j<5;j++) /* this loop is used for 6 columns*/
      {
         scanf("%c ",&array_[i][j]);
      }
  }
  /* print elements of array*/

  printf("\nElements from array_:\n");
  for(i=0;i<5;i++) /* this loop is used for 5 rows*/
  {
      for(j=0;j<5;j++) /* this loop is used for 6 columns*/
      {
         printf("%c ",array_[i][j]);
      }
      printf("\n");
  }
}
