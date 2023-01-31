#include<stdio.h>
int main(){
int n,a,b;
int count=0;
int flag=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d%d",&a,&b);
if(a>b){
count=count+1;
}
else if(a<b){
flag=flag+1;
}
else if(a==b){
count=count+0;
flag=flag+0;
}
}
if(count>flag){
printf("Mishka");
}
else if(count<flag){
printf("Chris");
}
else if(count==flag){
printf("Friendship is magic!^^");
}
return 0;
}
