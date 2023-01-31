#include<stdio.h>
int main(){
    int t,m,n;
    scanf("%d",&t);
    while(t--){
       scanf("%d %d",&n,&m) ;
       int arr[n][n];
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               scanf("%d",&arr[i][j]) ;
            }

       }
       if(m<n){
        printf("YES\n");
       }
       else{
        printf("NO\n");
       }
    }
    return 0;
}
