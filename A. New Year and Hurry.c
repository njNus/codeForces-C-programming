#include<stdio.h>
int main(){
    int n,k,res=0;
    scanf("%d %d",&n,&k);
    for(int i=5;5*i<=240-k;i+=5){
        res++;
    }
    printf("%d",&res);
}
