// LEAP YEAR IN C++ PROGRAMMING
#include <iostream>
int main () {
    int year;
    std::cout << "Enter Year Value: ";
    std::cin >> year;
    if((year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
        std::cout << year << " Is Leap Year";
    else 
        std::cout << year << " Is Not Leap Year";
    return 0;
}