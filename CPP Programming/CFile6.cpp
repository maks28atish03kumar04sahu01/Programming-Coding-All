// ARITHMETIC OPERATION IN C++ PROGRAMMING
#include<iostream>
#include <cstdlib>
int main () {
    while (1) {
        int num1, num2, choice;
        std::cout << "Enter Num1 Value: ";
        std::cin >> num1;

        std::cout << "Enter Num2 Value: ";
        std::cin >> num2;

        std::cout << "Enter Choice For Operation: ";
        std::cin >> choice;

        if(choice == 0) {
            std::cout << "Exiting The Program..." << std::endl;
            exit(0);
        }

        switch (choice) {
            case 1:
                std::cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
                break;
            case 2:
                std::cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
                break;
            case 3:
                std::cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
                break;
            case 4:
                if (num2 == 0)
                    std::cout << "Division By Zero!" << std::endl;
                else
                    std::cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
                break;
            case 5:
                if (num2 == 0)
                    std::cout << "Modulo By Zero!" << std::endl;
                else
                    std::cout << "Modulo: " << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
                break;
            default:
                std::cout << "Invalid Option Choosed By User!" << std::endl;
                exit(0);
        }
    }
    return 0;
}