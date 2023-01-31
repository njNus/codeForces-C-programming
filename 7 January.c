#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m;
        scanf("%d", &m);
        // Find the length of m
        int len = (int)log10(m) + 1;
        // Round down to the nearest power of 10
        int round_number = pow(10, len - 1);
        // Calculate the difference between m and the nearest round number
        int d = m - round_number;
        printf("%d\n", d);
    }
    return 0;
}
