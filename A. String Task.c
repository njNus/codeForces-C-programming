#include<stdio.h>
int main(){
    int count =0;
    char s[100];
    scanf("%s[^\n]%*c",s);
    int l= strlen(s);
    char s1[210];
    for(int i=0;i<l;i++){
           if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'y' && s[i] != 'Y'){

           s1[count] = '.' ;
           if(s[i]<97){

        s1[count+1] = s[i]+32;
           }
        else{

          s1[count+1] = s[i];
        }
              count +=2;


            //s[i] = '.';
            //s[i]=s1[i];
        }

    }
    s1[count]='\0';
    printf("%s",s1);
    return 0;
}
