#include<stdio.h>
int main(){
    int a,b;
    int yr=0;
    scanf("%d",&a);
    scanf("%d",&b);
    while(3*a>2*b){
        yr++;
    }
    printf("%d",yr);
    return 0;
}
