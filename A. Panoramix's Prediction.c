#include<stdio.h>
int main(){
    int n,m;

    //int c;
    scanf("%d %d",&n,&m);
    if (n==2 && m==3){
        printf("YES");
        return 0;
    }
    for(int i=n+2;i<=m;i+=2){
        int flag=0;
        for(int j=2;j<=i/2;j++){
           if(i%j==0 ){
                flag = 1;
              //  printf("\nnot prime") ;
                break;

           }
           // printf("\nprime") ;

        }
    //printf("%d",i);

        if(flag == 0 && i<m) {
            printf("NO");
            return 0;
        }
        else if (flag == 0 && i==m){
            printf("YES");
            return 0;
        }
    }
        printf("NO");
       return 0;

    }


