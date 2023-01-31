#include<stdio.h>
int main(){
    int n=0;
    char s[n];
    char s1[200];
    scanf("%s[\^n]%*c",s);
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
           s1[i]='0' ;
        }
        else if(s[i]=='-'){
                if(s[i+1]=='.'){
                s1[i]='1';
                i++;
                continue;
                }
                else if(s[i+1]=='-'){
                    s1[i]='2';
                    i++;
                    continue;
                }
    }
    }
    printf("%s",s1);
    return 0;
}
