#include<stdio.h>
#include<string.h>
int main(){
    int up=0;
    int low=0;
    char s[100];
    scanf("%s[^\n]%*c",s);
    int l=strlen(s);
    for(int i=0;i<l;i++){
        if(s[i]>96){
           low++;
        }
        else{
           up++;
        }
    }
    //printf("Up: %d low: %d\n",up,low);
    if(up>low){
           for(int i=0;i<l;i++){
        if(s[i]>96){
           s[i]=s[i]-32;
          //printf("%s",s) ;
        }

           }
    }
    else{
         for(int i=0;i<l;i++){
        if(s[i]<96){
           s[i]=s[i]+32;
    }
         }
    }
   printf("%s",s);

    return 0;

}
