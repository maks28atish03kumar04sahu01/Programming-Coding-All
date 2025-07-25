// NTH FIBONACCI NUMBER IN C PROGRAMMING
#include <stdio.h>
int main() {
    int range;
    printf("Enter Range Value: ");
    scanf("%d",&range);

    int n1 = 0, n2 = 1, temp = 0;
    for(int i = 0; i <= range; i++) {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }
    printf("Nth Fibonacci Number Is: %d",temp);
    return 0;
}