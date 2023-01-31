#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    //char s1[3]="YES";
    //char s2[2]="NO";
    //int arr[]=
    while(t--){
        char s[6];
        for(int i=0;i<6;i++){
            scanf("%s[^\n]%*c",s);
            if (s[0]+s[1]+s[2]==s[3]+s[4]+s[5]){
            printf("%s\n","YES");
        }
        else{
            printf("%s\n","NO");
        }
    }

}
  return 0;
}
