// FACTORIAL NUMBER IN C PROGRAMMING
#include <stdio.h>
int main() {
    int number;
    printf("Enter Your Value: ");
    scanf("%d",&number);
    int count = 1;
    for(int i = 1; i <= number; i++) {
        count *= i;
    }
    printf("Factorial Of %d Is: %d",number, count);
    return 0;
}