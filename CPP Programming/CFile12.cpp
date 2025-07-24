// CONVERT A DECIMAL NUMBER INTO ANY BASE C++ PROGRAMMING
#include <iostream>
#include <string>
#include <algorithm>
std::string decimalToBase(int number, int base) {
    std::string result = "";
    std::string digits = "0123456789ABCDEF";
    if(number == 0) return "0";
    while (number > 0) {
        result += digits[number % base];
        number /= base;
    }
    std::reverse(result.begin(), result.end());
    return result;
}
int main () {
    std::cout << "decimalToBase(12, 2) = " << decimalToBase(12, 2) << std::endl;
    std::cout << "decimalToBase(112, 8) = " << decimalToBase(112, 8) << std::endl;
    std::cout << "decimalToBase(28, 16) = " << decimalToBase(28, 16) << std::endl;
    return 0;
}