#include <stdio.h>

int main()
{
    unsigned char num, swapped_num;

    printf("Enter a byte (in hexadecimal notation): ");
    scanf("%hhx", &num);

    swapped_num = ((num & 0x0F) << 4) | ((num & 0xF0) >> 4);

    printf("Byte with nibbles swapped: %hhx\n", swapped_num);

    return 0;
}

