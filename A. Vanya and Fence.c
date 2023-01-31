#include<stdio.h>
int main(){
    int n,h;
    int count=0;
    int a;
    scanf("%d %d",&n,&h);
    //printf("%d %d\n",n,h);
   // for( int i=0;i<n;i++)
   while(n--)
        {
          //  a[n]==a[i];
        scanf("%d ",&a);
        if(a>h){
            count=count+2;
           // printf("%d : %d\n",a,count);
        }
        else{
            count++;
           // printf("%d : %d\n",a,count);
        }


       // printf("%d",a[i]);

    }
 //   printf("%d %d",n,h);
    printf("%d",count);
 /*   for(int i=0;i<n;i++){
        if(a[i]<=h){
            count++;
        }
        else
          count=count+2;
    }
    printf("%d",&count);
}
*/
return 0;
}
