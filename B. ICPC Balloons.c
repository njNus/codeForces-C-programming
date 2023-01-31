#include<stdio.h>
int main(){
    int t,n,count=0;
    int ballon=-1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        char s[n];
        scanf("%s[^\n]%*c",s);
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
            if(s[i]>='A' && s[i]<='Z'){
               count+=2;
               ballon=count;
               if(s[i]==s[j]){
               ballon-=1;
               }
            }

        }
        }
       printf("%d \n",ballon);
    }
   // printf("%d \n",ballon);
    return 0;
}

