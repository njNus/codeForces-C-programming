#include<stdio.h>
int main(){
    int t,n,even=0;
    scanf("%d",&t);
    while(t--){
       scanf("%d",&n) ;
       int arr[n];
       for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
        if(arr[i]%2!=0){
            even++;
            if(even%2==0)    {
                sum+=arr[i];
            }

        }
       }

    }
    return 0;
}
