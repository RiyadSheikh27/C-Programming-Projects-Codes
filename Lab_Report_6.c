#include <stdio.h>

void convertBinaryToIPv4(unsigned int binaryIP) {

    int octet1 = (binaryIP >> 24) & 0xFF;
    int octet2 = (binaryIP >> 16) & 0xFF;
    int octet3 = (binaryIP >> 8) & 0xFF;
    int octet4 = binaryIP & 0xFF;

    printf("%d.%d.%d.%d\n", octet1, octet2, octet3, octet4);
}

int main() {

    unsigned int binaryIP;
    printf("Enter a 32-bit binary IP address: ");
    scanf("%u", &binaryIP);

    printf("Dotted Decimal IP: ");
    convertBinaryToIPv4(binaryIP);

    return 0;
}
