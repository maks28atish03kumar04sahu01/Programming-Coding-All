// EVEN AND ODD NUMBER IN C++ PROGRAMMING
#include<iostream>
void evenodd (int value) {
    if(value % 2 == 0) {
        std::cout << value << " Is Even Number." << std::endl;
    } else {
        std::cout << value << " Is Odd Number." << std::endl;
    }
}
int main () {
    evenodd(24); 
    evenodd(89); 
    return 0;
}