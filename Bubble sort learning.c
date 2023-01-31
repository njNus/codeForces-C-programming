#include<stdio.h>
int main()
{
    int DATA [6]={77,42,35,12,101,5};
    int TEMP;
    for(int k=0;k<5;k++)
    {
        //int PTR=1;
        for(int PTR=0;PTR<=6-k-1;PTR++)
        {
            if(DATA[PTR]>DATA[PTR+1])
            {
                TEMP=DATA[PTR];
                DATA[PTR]=DATA[PTR+1];
                DATA[PTR+1]=TEMP;
            }
           // PTR=PTR+1;
        }
      //  printf("%d",DATA[6]);
    }
    for(int i=0;i<=6;i++)
    {
        printf("%d \n",DATA[i]);
    }

    return 0;
}
