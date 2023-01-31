#include<stdio.h>
int main(){
    long long t,a,b,x;
    scanf("%lld",&t);
    while(t--){
       scanf("%lld %lld",&a,&b) ;
       x= abs (a-b);
       printf("%lld \n",x/10+(x%10!=0));
    }
    return 0;
}
