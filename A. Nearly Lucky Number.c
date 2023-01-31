#include <stdio.h>
int main(){
    int p;
    int count=0;
    long long int n;
    scanf("%llu",&n);
    while(n!=0){
      p=n%10;
      n/=10;
      if(p==4||p==7)  {
        count ++;
      }

    }
    if(count ==4||count==7){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;

}

