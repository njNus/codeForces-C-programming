#include<stdio.h>
int main(){
    int t,n=0;
    int arr[n-1];
    scanf("%d",&t);
    int growth=0;
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n-1;i++){
        scanf("%d",&arr[n-1]);
        switch(){
        case case_1:
            arr[i]==1;
            growth++;
            //break;

        case case_2:
            arr[i]==arr[i+1]==0;
            growth=-1;
            //break;
        case case_3:
            arr[i]==arr[i+1]==1;
            growth+=5;
           // break;
        case case_4:
            arr[i]==0;
            growth++;
            //break;

        }
    }
    }

}
