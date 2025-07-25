// POSITIVE, NEGATIVE, ZERO IN C PROGRAMMING
#include <iostream>
int main () {
    int number;
    std::cout << "Enter Number Value: ";
    std::cin >> number;
    if (number > 0) {
        std::cout << number << " Is Positive Number";
    } else if (number < 0) {
        std::cout << number << " Is Negative Number";
    } else {
        std::cout << number << " Is Zero";
    }
    return 0;
}