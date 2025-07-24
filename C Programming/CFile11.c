// MULTIPLICATION TABLE IN C PROGRAMMING
#include<stdio.h>
void multiplication_table (int num1, int num2) {
    printf("Multiplication Table: %d\n",num1);
    for(int i = 1; i <= num2; i++) {
        printf("%d * %d = %d\n",num1, i, (num1 * i));
    }
}
int main () {
    multiplication_table(5,10);
    multiplication_table(7,20);
    return 0;
}