
#include <stdio.h>
int main()
{
    int n;
    int a[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&a[n]);
    }
    int i;
    int sumf=0;
    int suml=0;
    for( i=0;i<3;i++ ){
        sumf+=(a[n]-'0');
    }
    for( i=3;i<6;i++ ){
        suml+=(a[n]-'0');
    }
    if(sumf==suml){
        printf("YES\n");
    }
    else{
        printf("NO");
    }
    return 0;



}
