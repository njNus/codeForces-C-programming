#include<stdio.h>
int main(){
    int x;
    long double n;
    scanf("%d",&x);
    while(x--){
      scanf("%Lf",&n);
      printf("%Lf",(n+1)/2);
    }

    return 0;
}
