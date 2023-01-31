#include<stdio.h>
int main(){
    int cost;
    int dollar;
    int no;
    int tem=0;
    int loan=0;
    scanf("%d",&cost);
    scanf("%d",&no);
    scanf("%d",&dollar);
    for(int i=1;i<=no;i++ ){
        tem =tem+ i*cost;
    }
    loan = loan+(tem-dollar);
    printf("%d",&loan);
    //printf("%d",tem);
    return 0;
}
