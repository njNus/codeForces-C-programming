#include<stdio.h>
int main(){
    int n;
    int a=0;
   // long long int a=0;
    scanf("%d",&n);
    char s[20];
   // scanf("%s[^\n]%*c",&s);
    while(n--){
        scanf("%s[^\n]%*c",&s);
        //int a=0;
       // for(int i=0;i<n;i++){
            if (s[0]=='T'){
                a=a+4;
               // printf("%lld",a);
            }
            else if(s[0]=='C'){
              a=a+6;
             // printf("%lld",a);
            }
        else if(s[0]=='O'){
            a=a+8;
          //  printf("%lld",a);u
        }
        else if(s[0]=='D'){
            a=a+12;
           // printf("%lld",a);
        }
        else if (s[0]=='I'){
            a=a+20;

        }
        // printf("%ld",a);
        //}
        //return a;

}
 printf("%d",a);

return 0;
}
