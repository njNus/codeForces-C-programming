#include<stdio.h>
int main(){
    char c[100];
    char c1[]="hello";
    int l;
    int x=0;//y=0;
    scanf ("%s[^\n]%*c", &c) ;
    l=strlen(c);
    for(int i=0;i<l;i++){
        if(c[i]==c1[x]){
            x++;
         //   y++;
        }
        if (x==5)
            break;
    }
    if(x==5){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
