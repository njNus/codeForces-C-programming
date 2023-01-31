#include<stdio.h>
int main(){
    int n,count=0;
    int sum=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s[^\n]%*c",&s);
    //printf("%d",i);
    //printf("%s",s);
    for(int i=0;i<n;i++){
        if(s[n]>=65 && s[n]<=90 || s[n]>=97 && s[n]<=122 ){
            count++;
        }
    }
    sum=sum+count ;
    if(sum>=26){
        printf("YES");
    }
    else{
        printf("NO");

    }
    return 0;


}
