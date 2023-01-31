#include<stdio.h>
int main(){
    char s[1000];
    gets(s);

   if( s[0]<123 &&  s[0]>96){
    //printf("%s",s);
    s[0]=s[0]-32;
   }
    printf("%s",s);
     return 0;


}
