#include<stdio.h>
int main(){
    int n,save,sev;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    int flag=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            count++;
            sev=i;
        }
        else{
            flag++;
            save=i;
        }
    }
            if(count==1){
                printf("%d",sev+1);
            }
            else if(flag==1){
                printf("%d",save+1);
            }

}
