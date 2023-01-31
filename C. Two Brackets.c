#include<stdio.h>
#include<string.h>
int main(){
    int t=1;
    scanf("%d",&t);
    int moves=0;
    while(t!=0){
        char s[1000];
        scanf("%s[^\n]%*c",s);
        int n=strlen(s);
        int moves=0;
        int open1st=0;
        int open3rd=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open1st++;
            }
            else if(s[i]=='['){
                open3rd++;
            }
            else if(s[i]==')'){
               if(open1st>=1){
                moves++;
                open1st--;
               }
            }
            else if(s[i]==']'){
                if(open3rd>=1){
                    moves++;
                    open3rd--;
                }
            }
        }
        printf("%d\n",moves);

    }


    return 0;
}
