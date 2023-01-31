#include<stdio.h>
int main(){
    char A [5][5];
    int i,j;
    printf("Values in array A:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%10d",&A[i][j]);
        }
    }
    for(i=0;i<5;i++){
            for(j=0;j<5;j++){
            printf("%10d",A[i][j]);
            printf("\n");
    }
    }

    return 0;
}


