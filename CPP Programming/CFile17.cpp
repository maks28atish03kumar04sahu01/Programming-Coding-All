// FACTORIAL NUMBER IN C++ PROGRAMMING
#include <iostream>
int main () {
    int number;
    std::cout << "Enter Your Number: ";
    std::cin >> number;
    int count = 1;
    for(int i = 1; i <= number; i++) {
        count *= i;
    }
    std::cout << "Factorial Of " << number << " Is: " << count;
    return 0;
}