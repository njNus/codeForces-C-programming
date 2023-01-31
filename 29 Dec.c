#include<stdio.h>
/*int main(){
    int n;
    scanf("%d",&n);
    int count=0,c=0,untrt=0;//count for crime
    untrt=count+c;
    int arr[n];
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        if(arr[i]==-1){
                count++;

        }
        else{
            c=c+arr[i];
            if(n==1){
                if(count>c){
                    return count;
                }
                else{
                    return c;
                }
            }


            if(arr[i]==arr[i+1]){
                if(c==count){
                    flag=0;
                }
                else if(c<count){
                    flag++;
                }
                c

            }
    }

        if(flag==1){
        printf("%d",(count-c)+1);
    }
    else if(c>count && flag==0)
        printf("%d",(c-count)+1);

    return 0;
}*/
int main(){
    int n,crime=0,recrt=0;
    //int f;
    //int g;
    scanf("%d",&n);
    for( int i=0;i<n;i++){
        int event;
        scanf("%d",&event);
        if(event>0){
                recrt+=event;
        }else{
            if(recrt<1){
                ++crime;
              //printf("%d",crime);
            }else{
                --recrt;

            }
        }
    }
    printf("%d",crime);
    return 0;
}

