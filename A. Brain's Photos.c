#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
     char color [n][m];
    int count=0;
    char s1[]="#Black&White";
    char s2[]="#Color";
    for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
            {
                scanf("%s[^\n]",&color[i][j]);
                if(color[i][j]=='C'|| color[i][j]=='M'||color[i][j]=='Y'){
                    count++;
                }
            }

    }
   // printf("%d",count);
    if(count==0){
        printf("%s",s1);
    }
    else{
        printf("%s",s2);
    }
    return 0;
}
