#include<stdio.h>
int main()
{
 int i,N;
 float sum;
 sum=0;
 printf("Enter N:") ;
 scanf("%d",&N) ;
 for(i=1;i<=N;i++)
    sum=sum+((float)1/(float)i);
 printf("Series of the sum is %f\n",sum);

}
