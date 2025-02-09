#include <stdio.h>
#include <stdlib.h>

void binaryToHexadecimal(char *binary) {
    unsigned long decimal = strtoul(binary, NULL, 2);

    printf("Hexadecimal: %lX\n", decimal);
}

int main() {
    char binary[65];

    printf("Enter a binary number: ");
    scanf("%64s", binary);

    binaryToHexadecimal(binary);

    return 0;
}
