#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    sum=(n*(n+1))/2;
    for(int i=1;i<=n;i++){
        sum++;
    }
    printf("%d",sum);
}
