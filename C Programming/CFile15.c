// FIBONACCI SERIES IN C PROGRAMMING
#include <stdio.h>
int main() {
    int range;
    printf("Enter Range Value: ");
    scanf("%d",&range);

    int n1 = 0, n2 = 1, temp = 0;
    printf("%d, %d, ",n1, n2);
    for(int i = 0; i <= range; i++) {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        printf(", %d",temp);
    }
    return 0;
}