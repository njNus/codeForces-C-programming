#include<stdio.h>
int main(){
    int m;
    printf("Enter the size of your array: \n");
    scanf("%d",&m);
    int arr[m];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    printf("The reversed array is: \n");
    for(int i=m-1;i>=0;i--){
        printf("%d \n",arr[i]);
    }
    return 0;
}
