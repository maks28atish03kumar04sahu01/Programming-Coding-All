// ODD NUMBER SERIES FROM 1 TO N & RANGE1 TO RANGE2 IN C++ PROGRAMMING
void odd_series_1 (int N) {
    std::cout << "Odd Number From 1 To " << N << std::endl;
    for(int i = 1; i <= N; i++) {
        if(i % 2 != 0) {
            std::cout << i << " ";
        }
    }
}
void odd_series_2 (int num1, int num2) {
    std::cout << "Odd Number From " << num1 << " TO " << num2 << std::endl;
    for(int i = num1; i <= num2; i++) {
        if(i % 2 != 0) {
            std::cout << i << " ";
        }
    }
}
int main () {
    odd_series_1 (30);
    std::cout << std::endl;
    std::cout << std::endl;
    odd_series_2 (40, 70);
    return 0;
}