#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int fin_arr[t];
    while(t--){
        int f=0,k=0;
        int n;//length of the array
        scanf("%d",&n);
        int arr[n];
        //int flag=arr[0];
        for(int i=0;i<n;i++){
            scanf("%d",  & arr[i]);
        }
        int flag=arr[0];
        //int f2;
        int index1=-1;
        int index2=-1;//by default -1
        int unique_index=-1;
        for(int j=0;j<n;j++){
                //int flag=arr[0];
            if (flag==arr[j]){
                f++;
                //printf(" val_f: %d\n",f);
                index1=j;
                //printf(" val_index1: %d\n",index1);
                //continue;
            }
            else{
            k++;
            // printf(" val_k: %d\n",k);
            index2=j;
            }
           // printf(" val_index2: %d\n",index2);
            //unique index's value storing
            //continue;
            /*printf("%d \n",j+1);
            break*/
            if(f>0 && k>0){
                   // if(f==k){
                       // continue;//nothing to chk
                    //}

                        if(f>k){
                           unique_index= index2+1;
                           //printf(" uniqueee%d \n",unique_index);
                               // fin_arr[t-1]=unique_index;
                           break;
                        }

                        else if(k>f) {
                            unique_index=index1+1;
                            //printf(" uniqueeeeeee%d \n",unique_index);
                             // fin_arr[t-1]=unique_index;
                            break;
                        }

                    //unique_index=j+1;
              //printf("%d \n",fin_arr);
             // fin_arr[t-1]=unique_index;

            }
            //printf("%d\n",fin_arr[t-1]);
        }
        fin_arr[t-1]=unique_index;

        printf("%d\n",fin_arr[t-1]);
    }
   // for(int i=0;i<t;i++){
    //printf("%d\n",fin_arr[t-1-i]);
    //}
    return 0;
}
