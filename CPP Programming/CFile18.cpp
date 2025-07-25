// nCr nPr IN C++ PROGRAMMING
#include <iostream>
int Factorial(int n) {
    int count = 1;
    for(int i = 1; i <= n; i++) {
        count *= i;
    }
    return count;
}
int main () {
    int n, r;
    std::cout << "Enter N Value: ";
    std::cin >> n;
    std::cout << "Enter R Value: ";
    std::cin >> r;
    int res1 = Factorial(n);
    int res2 = Factorial(r) / Factorial(n-r);
    int nCr = res1 / res2;
    int nPr = res1/Factorial(n-r);
    std::cout << "nCr Value: " << nCr << std::endl;
    std::cout << "nPr Value: " << nPr << std::endl;
    return 0;
}