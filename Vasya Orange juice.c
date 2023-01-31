#include <stdio.h>
int main(){
    int n;
    int p[n];
    float sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",p[i]);
        sum = (sum+p[i]);

    }
    printf("%d",sum/n);

return 0;

}

