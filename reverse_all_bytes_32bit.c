#include <stdio.h>

unsigned int swapAllBytes32(unsigned int num) {
    return ((num & 0x000000FF) << 24) |  // Byte0 to Byte3
           ((num & 0x0000FF00) << 8)  |  // Byte1 to Byte2
           ((num & 0x00FF0000) >> 8)  |  // Byte2 to Byte1
           ((num & 0xFF000000) >> 24);   // Byte3 to Byte0
}

int main() {
    unsigned int num = 0x12345678;
    unsigned int result = swapAllBytes32(num);

    printf("Input :  0x%X\n", num);
    printf("Output:  0x%X\n", result);  // Expected: 0x78563412

    return 0;
}

