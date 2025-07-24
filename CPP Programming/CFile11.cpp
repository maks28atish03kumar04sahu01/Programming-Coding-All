// MULTIPLICATION TABLE IN C++ PROGRAMMING
#include<iostream>
void multiplication_table(int num1, int num2) {
    std::cout << "Multiplication Table Of " << num1 << std::endl;
    for(int i = 1; i <= num2; i++) {
        std::cout << num1 << " * " << i << " = " << (num1 * i) << std::endl;
    }
}
int main () {
    multiplication_table (7, 10);
    multiplication_table (12, 20);
    return 0;
}