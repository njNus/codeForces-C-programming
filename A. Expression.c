#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,max;
    scanf("%d %d %d \n\n",&a,&b,&c);
       d=a+b*c;
       //printf("%d",d) ;
        e=a*(b+c);
        //printf("%d\n",e);
       f=a*b*c;
       // printf("%d\n",e);
        g=(a+b)*c;
         //printf("%d\n",e);
       if(d>e)
       {
           if(d>f){
            if(d>g){
              max=d;
              printf("%d\n",d);
            }
            else{
                max=g;
                printf("%d\n",g);
            }
           }
       }
       else if(e>f)
        {
        if(e>g)
        {
            max=e;
            printf("%d\n",e);

        }
        else
        {
          max=g;
          printf("%d\n",g);

        }
       }
       else if(f>g)
       {
           max=f;
           printf("%d\n",f);
       }
       else{
        max=g;
        printf("%d\n",g);
       }
       getch();
    }

