#include<stdio.h>
int n;
int fibo_nums(int n){
    if(n==0){
        return 0;
    }
   else if(n==1){
    return 1;
   }
   else{
    return fibo_nums(n-2)+fibo_nums(n-1);
   }
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf(fibo_nums(i)+" ");

    return 0;
    }
}
