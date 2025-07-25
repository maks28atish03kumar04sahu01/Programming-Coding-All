// nCr nPr IN C PROGRAMMING
#include <stdio.h>
int Factorial (int n) {
    int count = 1;
        for(int i = 1; i <= n; i++) {
        count *= i;
    }
    return count;
}
int main() {
    int n, r;
    printf("Enter N Value: ");
    scanf("%d",&n);
    printf("Enter R Value: ");
    scanf("%d",&r);

    int res1 = Factorial(n);
    int res2 = Factorial(r) * Factorial(n-r);
    int nCr = res1 / res2;
    int nPr = res1 / Factorial(n-r);
    printf("nCr Value: %d\n",nCr);
    printf("nPr Value: %d\n",nPr);
    return 0;
}