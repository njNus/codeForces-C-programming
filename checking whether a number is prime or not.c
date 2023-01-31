#include<stdio.h>
int main()
{
int num,i,is_prime=1;
printf("Enter the number");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
is_prime=0;
break;
}
if(is_prime==1)
printf("num is a prime number");
else("num is not a prime number ");
}
