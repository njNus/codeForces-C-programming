#include<stdio.h>
int main(){
    int n;
    char s[n];
    n= strlen(s);
    char temp[1000];
    scanf("%s[^\n]%*c",&s);
    for(int i=0;i<n;i++){
        if(s[i]=='4'|| s[i]=='7')
        {
            temp[1000]=s[n];

        }
    }
    printf("%s",temp);
}
