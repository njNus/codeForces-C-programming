#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n-1];
    int ar1[2];
    int count ,sum=0;
    while(n--){
        scanf("%d",&arr[n-1]);
    }
        for(int i=0;i<n-1;i++){
            if(arr[n-1]==1|| arr[n-1]==2||arr[n-1]==3 ){
                arr[n-1]=ar1[2];
                sum+=ar1[2];
            }
        }
            if(sum==6){
                count++;
                printf("%d",&count);
                printf("%d\n",&n-1);
            }


    return 0;
}
