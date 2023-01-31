#include<stdio.h>
int main(){
    int n,crime=0,recrt=0;

    scanf("%d",&n);
    for( int i=0;i<n;i++){
        int event;
        scanf("%d",&event);
        if(event>0){
                recrt+=event;
        }else{
            if(recrt<1){
                ++crime;
            }else{
                --recrt;

            }
        }
    }
    printf("%d",crime);
    return 0;
}
               /* if(recrt>0){
                    recrt--;
                }else{
                    untrt++;
                }
            f=crime++;
        }
       else{
        g=recrt++;
       }
    }
       /*if(f>g){
        untrt=untrt+1;
        printf("uuuuu%d",untrt);
        return untrt;
       }
       else if(f<g && f==g){
        untrt=0;

       }
    }
    total= total+untrt;
    printf("tot %d",total);
    return 0;
}*/
