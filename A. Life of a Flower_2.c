#include<stdio.h>
int main(){
    int t,n,ans=1;
    scanf("%d",&t);
    while(t--){
        int arr[n];
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<n;i++){
            if(arr[i]==0)
            {
               if(arr[i]==arr[i-1]) {
                printf("%d\n",-1);
               }
               else ans+=0;

            }
            else{
                if(arr[i]==arr[i-1])
                    ans+=5;
                else ans++;
            }
        }
         printf("%d\n",ans);

    }

   return 0;
}
