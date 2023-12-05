#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convertIPv4ToBinary(const char *ipAddress) {
    int dec[4];
    sscanf(ipAddress, "%d.%d.%d.%d", &dec[0], &dec[1], &dec[2], &dec[3]);
    for (int i = 0; i < 4; i++) {
        for (int j = 7; j >= 0; j--) {
            int bit = (dec[i] >> j) & 1;
            printf("%d", bit);
        }
        printf(" ");
    }

    printf("\n");
}

int main() {
    char ipAddress[16];

    printf("Enter IPv4 address: ");
    scanf("%15s", ipAddress);

    if (strlen(ipAddress) > 15) {
        printf("Invalid IPv4 address format.\n");
        return 1;
    }
    printf("Binary representation: ");
    convertIPv4ToBinary(ipAddress);

    return 0;
}

