#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int acc=0;
    int diff;
    int arr[n];
    //int max=arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    //printf("%d\n",max);
    for(int i=1;i<n;i++){
        if(arr[i]>max){
           max =arr[i];

        }
        //printf("%d\n",max);
    }
    for(int i=0;i<n;i++){
        diff=max-arr[i];
        acc+=diff;
    }
  printf("%d\n",acc);
    return 0;
}
