// EVEN NUMBER SERIES FROM 1 TO N AND RANGE1 TO RANGE2 IN C++ PROGRAMMING
#include<iostream>
void even_series_1 (int N) {
    std::cout << "Even Number Series From 1 To " << N << std::endl;
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            printf("%d ",i);
        }
    }
}
void even_series_2 (int range1, int range2) {
    std::cout << "Even Number Series From " << range1 << " To " << range2 << std::endl;
    for(int i = range1; i <= range2; i++) {
        if(i % 2 == 0) {
            printf("%d ",i);
        }
    }
}
int main () {
    even_series_1(30);
    std::cout << std::endl;
    std::cout << std::endl;
    even_series_2(60, 90);
    return 0;
}