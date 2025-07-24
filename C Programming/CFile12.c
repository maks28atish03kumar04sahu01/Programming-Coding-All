// CONVERT A DECIMAL NUMBER INTO ANY BASE IN C PROGRAMMING
#include<stdio.h>
void decimalToBase(int number, int base) {
    char result[32];
    int index = 0;
    char digits[] = "0123456789ABCDEF";

    if(number == 0) {
        printf("0\n");
        return;
    }
    while (number > 0) {
        result[index++] = digits[number % base];
        number /= base;
    }
    for(int i = index - 1; i >= 0; i--) {
        printf("%c",result[i]);
    }
    printf("\n");
}
int main () {
    decimalToBase(12, 2);
    decimalToBase(112, 8);
    decimalToBase(28, 16);
    return 0;
}