#include<stdio.h>
int main(){
    int t,c;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&c);
      char s[2][c];
      int i=0;
      while(i<c)
      {
          scanf("%s[^\n]%*c",s[c]);
          i++;
      }
      for(int j=0;j<2;j++)
      {
          for(int k=0;k<c;k++)
          {
              if(s[j][k]==s[j][k+1])
              {
                  if(s[j][k]=='G' && s[j][k+1]=='B' || s[j][k]=='B'&& s[j][k+1]=='G')
                  {
                      printf("YES \n");
                  }
              }
              else
              {
                  printf("NO \n");
              }
          }

      }

    }

    return 0;
}
