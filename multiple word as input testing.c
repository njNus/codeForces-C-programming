#include<stdio.h>
#include<strings.h>
int main(){
    int n;
    scanf("%d",&n);
    char w[200];
    for(int i=0;i<=n;i++){
    fgets(w,200,stdin);
    puts(w);
    }
    return 0;
}
