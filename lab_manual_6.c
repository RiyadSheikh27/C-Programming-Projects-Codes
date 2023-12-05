#include <stdio.h>
#include <math.h>

int convert(int);

int main() {
    int n, bin;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    bin = convert(n);
    printf("%d in binary = %d ", n, bin);
    return 0;
}

int convert(int n) {
    int bin = 0;
    int rem, i = 1;

    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}

