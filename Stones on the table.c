#include<stdio.h>
int main(){
    int in;
    char s[50];
    scanf("%d",&in);
    scanf("%s[^\n]%*c",&s);
    printf("%d\n",in);
    printf("%s",s);
    return 0;
}

