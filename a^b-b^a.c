#include<stdio.h>

int main(){
    int a,b;
    int v1=1;
    int v2=1;
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++){
        v1=v1*a;
    }
    for(int j=0;j<a;j++){
        v2=v2*b;
    }
    printf("%d",v1-v2);
    return 0;
}



























