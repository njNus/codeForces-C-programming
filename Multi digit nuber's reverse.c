#include <stdio.h>

int main(){

    int n, m = 0, remainder;

    printf("Enter the multidigit number n to reverse: ");

    scanf("%d", &n);

    while (n != 0){

        remainder = n % 10;

        m = m * 10 + remainder;

        n = n/10;

    }

    printf("The reversed number of n is: %d", m);

    return 0;

}
