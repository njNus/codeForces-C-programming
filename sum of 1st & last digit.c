#include<stdio.h>
#include<conio.h>
void main()
{
int  i,num,first,last;
clrscr();
printf("enter a digit");
scanf("%d",&num);

last=num/10;
last=num-(last*10);

while(num>=10)
{
    num/=10;
    if(num<10)
    {
        first=num;
        break;
    }
    i++;
}
printf("last digit=%d\n",last);
printf("first digit=%d\n",first);
getch();
}
•
