#include<stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX],b[MAX][MAX],prod[MAX][MAX];
    int arows, acols,brows,bcols,sum=0;
    printf("Enter rows & coloumns of matrix a: \n");
    scanf("%d %d",&arows,&acols);
    printf("\n");
    for(int i=0;i<arows;i++){
        for(int j=0;j<acols;j++)
        {
           scanf("%d",&a[i][j]) ;
        }
        //printf("\n");
    }
    printf("\n");
    printf("Enter rows & coloumns of matrix b: \n");
    scanf("%d %d",&brows,&bcols);
    printf("\n");
    if(brows !=acols)
    {
        printf("Multiplication between matrices a & b is not possible!!!!");
    }
    else{
    for(int i=0;i<brows;i++){
        for(int j=0;j<bcols;j++)
        {
           scanf("%d",&b[i][j]) ;
        }
    }
    }
    printf("\n");
    for(int i=0;i<arows;i++)
    {
        for(int j=0;j<bcols;j++)
        {
            for(int k=0;k<acols;k++)
            {
                sum = sum + a[i][k]*b[k][j];
                prod [i][j]=sum;
            }
            sum=0;

        }
    }
    printf("resultant matrix: \n");
    for(int i=0;i<arows;i++)
    {
        for(int j=0;j<bcols;j++)
        {
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }

return 0;

}
