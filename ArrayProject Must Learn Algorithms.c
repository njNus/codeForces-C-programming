#include <stdio.h>
int main(){
    system("cls");
    int input;
    do{
        printf("Menu: \n");
        printf("------------\n");
        printf("1.Add \n");
        printf("2.Insert \n");
        printf("3.Edit \n");
         printf("4.Delete\n");
          printf("5.Display \n");
           printf("6.Clear \n");
           printf("0.Exit \n");
           printf("------------\n");
           printf("Plz enter a menu");
        scanf("%d",&input);
        system("cls");
        printf("You have selected menu no: %d\n",input);
    }while(input!=0);
}

