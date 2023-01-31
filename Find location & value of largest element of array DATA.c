#include<stdio.h>
int main(){
    int DATA[10]={22,65,1,99,32,17,74,49,33,2};
    int N=10,k=0,LOC=0,MAX=DATA[0];
    while(k<N){
        if(MAX<DATA[k])
        {
            LOC=k;
            MAX=DATA[k];
        }
        k=k+1;
    }
    printf("LOC= %d, MAX= %d",LOC,MAX);
    return 0;
}
