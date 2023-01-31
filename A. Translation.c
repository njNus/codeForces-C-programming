#include<stdio.h>
int main(){
    int l=0 ,l1=0;
    int f=0;
    char s[101];
    char s1[101];

    scanf("%s[^\n]%*c",&s);
    scanf("%s[^\n]%*c",&s1);
    l=strlen(s);
    l1=strlen(s1);
    if (l!=l1)
    {
        printf("NO");
        return 0;
    }

   // printf("%d ",l);

  //  printf("%s %s", s,s1);
    for(int i=0;i<l;i++){
        //for(int j=l-1;j>=0;j--){
            if(s[i]==s1[l-1-i]){
               f=1;
               //printf("\nmatched %d th char %c", i, s[i]);
            }
            else{
                f=0;
                break;
            }
        //}

    }
   // printf("\n ");
    if(f==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
