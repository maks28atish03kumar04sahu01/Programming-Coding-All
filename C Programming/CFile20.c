// POSITIVE, NEGATIVE, ZERO IN C PROGRAMMING
#include <stdio.h>
int main() {
    int number;
    printf("Enter Number Value: ");
    scanf("%d",&number);
    if(number > 0) {
        printf("%d Is Positive Number", number);
    } else if (number < 0) {
        printf("%d Is Negative Number", number);
    } else {
        printf("%d Is Zero", number);
    }
    return 0;
}