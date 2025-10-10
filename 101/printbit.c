#include<stdio.h>

void printBits(int num) {
    // Print bits from least significant bit (right) to most significant bit (left)
    // This is the little-endian representation
    for (int i = 0; i < sizeof(num) * 8; i++) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int number = 5;
    printf("Binary representation of %d is: ", number);
    printBits(number);
    return 0;
}