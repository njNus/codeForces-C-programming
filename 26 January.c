#include<stdio.h>
int main(){
    int n,ITEM,BEG,END,MID,LOC;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d th value: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("Enter the value to search: ");
    scanf("%d",&ITEM);
    BEG=0;
    END=n-1;
    MID=(BEG+END)/2;
    LOC=MID;
    while(arr[MID]!= ITEM){
        if(ITEM<arr[MID]){
            END=MID-1;

        }
        else {
            BEG=MID+1;
        }
        MID=(BEG+END)/2;
        if(arr[MID]==ITEM){
            LOC=MID;
        }

    }
    printf("Location will be: %d",LOC+1);
    return 0;
}
