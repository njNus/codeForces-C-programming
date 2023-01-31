#include<stdio.h>
#include<string.h>
int main(){
    int t,count=0;
    scanf("%d",&t);
    char arr[31] ="314159265358979323846264338327";
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char ar1[n];
        for(int i=0;i<n;i++)
        {
            scanf("%s[^\n]*%d",ar1);
        }
        for(int i=0;i<strlen(ar1);i++)
        {
            if(ar1[i]==arr[i])
            {
                count++;
            }
            else
            break;

        }

        printf("%d\n",count);
    }
    printf("%d\n",count);
    return 0;

}
