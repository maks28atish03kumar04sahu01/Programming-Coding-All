// NTH FIBONACCI NUMBER IN C++ PROGRAMMING
#include <iostream>
int main () {
    int range;
    std::cout << "Enter Range Value: ";
    std::cin >> range;

    int n1 = 0, n2 = 1, temp = 0;
    for(int i = 0; i <= range; i++) {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }
    std::cout << "Nth Fibonacci Number Is: " << temp;
    return 0;
}