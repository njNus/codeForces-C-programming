#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int asci [128] = {0} ;
    //gets(s);
   scanf("%s[^\n]%*c",&s);
   int l=strlen(s);
   int i,c = 0;
   for (i=0 ; i<l;i++)
   {
       asci[s[i]] =1;
   }
   for (i=97 ; i<124 ; i++){
        c = c+ asci[i];
   }
   if(c%2==0){
        printf("CHAT WITH HER!");

   }
   else{
        printf("IGNORE HIM!");
   }

return 0;
}
