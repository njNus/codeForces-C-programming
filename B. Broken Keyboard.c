#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    //char s[n];
    while(t--){
       scanf("%d",&n);
       int x=n;
       int z;
       if (n%3 >1){
          z= (n/3)+1;
          //printf("z: %d\n",z);
        x= 3* z;
       }
       //printf("x: %d\n",x);
       char s[n];
       char gen[n];
     scanf("%s[^\n]*%c",s);
     for(int i=0;i<n;i+=3){
            gen[i]=s[i];
            if(s[i+1]!='\0'){
            gen[i+1]=s[i+1];
            gen[i+2]=s[i+1];
            }

            //gen[i+3]=s[i+3];
          // printf("%s",gen);


     }
      //printf("%s\n",gen);
      if (strcmp(s,gen)==0){
        printf("YES");
      }
      else
        printf("NO");
}
}
