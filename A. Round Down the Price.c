/*#include<stdio.h>
#include<math.h>
int main(){
    long int t,m;
    int count,res;
    int k,flag;

    //int res=m-pow(10,count);
    scanf("%ld",&t);
    while(t--){
            flag=0;
            count=0;
       scanf("%ld",&m);
       k=m;
      while(k!=0){
            k/=10;
          if(k%10!=0 && k>1)  {

            flag=1;

          }
          //k/=10;
          count++;

        printf("k in while loop= %d\n",k);

      }


      res=m-pow(10,count);
      printf("k after while loop= %d\n",k);
     if(flag==0){
        printf("%d\n",0);
     }
     else
      printf("%d\n",res);
       //d=m-10^k

    }

    return 0;
}*/
#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m;
        scanf("%d", &m);
        // Find the length of m
        int len = (int)log10(m) + 1;
        // Round down to the nearest power of 10
        int round_number = pow(10, len - 1);
        // Calculate the difference between m and the nearest round number
        int d;
        if (m == round_number) {
            d = 0;
        } else {
            d = m - round_number;
        }
        printf("%d\n", d);
    }
    return 0;
}
