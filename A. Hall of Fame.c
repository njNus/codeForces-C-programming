#include<stdio.h>
int main(){
   int t,n;
    scanf("%d",&t);
    //char s [n];
    while(t--){
          int flag=-1;
         scanf("%d",&n) ;
         char s [n];
        scanf("%s[\^n]*%c",s);
        //printf("%s\n",s);
        for(int i=0;i<n;i++){

            if(s[i]=='R'&& s[i+1]=='L'){
                flag=0;
                // printf("0");
                break;
            }
            else if(s[i]=='L' && s[i+1]=='R'){
                flag=i+1;
                //printf("%d",flag);
                break;

        }
    }
    printf("%d\n",flag);


}
return 0;
}
