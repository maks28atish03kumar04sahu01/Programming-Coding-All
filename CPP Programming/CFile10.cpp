// EVEN AND ODD SERIES FROM 1 TO N AND RANGE1 TO RANGE2 IN C++ PROGRAMMING
#include<iostream>
void even_odd_series_1 (int N) {
    std::cout << "Even Numbers From 1 To " << N << std::endl;
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << "\nOdd Numbers From 1 To " << N << std::endl;
    for(int i = 1; i <= N; i++) {
        if(i % 2 != 0) {
            std::cout << i << " ";
        }
    }
}
void even_odd_series_2 (int range1, int range2) {
    std::cout << "Even Numbers From " << range1 << " TO " << range2 << std::endl;
    for(int i = range1; i <= range2; i++) {
        if(i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << "\nOdd Numbers From " << range1 << " TO " << range2 << std::endl;
    for(int i = range1; i <= range2; i++) {
        if(i % 2 != 0) {
            std::cout << i << " ";
        }
    }
}
int main () {
    even_odd_series_1 (30);
    std::cout << std::endl;
    std::cout << std::endl;
    even_odd_series_2 (20, 50);
    return 0;
}