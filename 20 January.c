#include<stdio.h>
int main(){
    int t,n,k;

    scanf("%d",&t);
    /*
    flag = -2 means pani dea hoise aj
    flag = 0 means pani dea hoi nai ( counter reset)
    flag = -1 means pani dea start e hoi nai / 1st test case er time e
    */
    while(t--){
        int height=1, flag=-1, dead = 0;
        //int arr[n];
        scanf("%d",&n);
        for (int i=0;i<n;i++){
            scanf("%d",&k);
            if (k==0){
                if (flag == 0){
                    height = -1;
                    dead =-1;
                }
                else{
                    flag= 0;
                }

            }
            else{
                if (flag == -2 ){
                        height+=5;
                        flag = -2;

                }
                else{
                    height++;
                    flag = -2;
                }

            }

        }
        if (dead == -1){
            printf("%d\n",dead);
        }
        else{
            printf("%d\n",height);
        }

    }
    return 0;
}
