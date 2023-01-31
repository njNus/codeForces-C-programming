#include<stdio.h>
int main()
{
int i=1,n=1,sum=0;
scanf("%d",&n);
printf("Enter value for n:");
for(i=1;i<=2n-1;i++)
{
sum+=sum;
printf("sum of odd numbers is %d",sum);
}
}
