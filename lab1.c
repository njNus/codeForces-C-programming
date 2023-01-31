#include <stdio.h>
/* main function starts from here*/
void main()
{
int array_two[20]; /* declaration of array for 20 integer numbers*/
int i;
/* declaration and initialization of array at compile time*/
int array_one[]={12,3,4,5,6,7,8,9,17,14};

/* print of array 1 */
printf("Elements from array 1:");
for(i=0;i<10;i++)
{
printf("%d ",array_one[i]);
}
/* initialization of array at run time*/
printf("\nEnter the 10 elements of array 2: ");
for(i=0;i<10;i++)
{
scanf("%d",&array_two[i]);
}
/* print elements of array*/
printf("Elements from array 1:");
for(i=0;i<10;i++)
{
printf("%d ",array_one[i]);
}
printf("\nElements from array 2:");
for(i=0;i<10;i++)
{
printf("%d ",array_two[i]);
}
}
