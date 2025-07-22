// ODD NUMBER SERIES FROM 1 TO N & RANGE1 TO RANGE2 IN C PROGRAMMING
#include<stdio.h>
void odd_series_1 (int N) {
    printf("Odd Number From 1 To %d\n",N);
    for(int i = 1; i <= N; i++) {
        if(i % 2 != 0) {
            printf("%d ",i);
        }
    }
}
void odd_series_2 (int range1, int range2) {
    printf("Odd Number From %d To %d\n",range1, range2);
    for(int i = range1; i <= range2; i++) {
        if(i % 2 != 0) {
            printf("%d ",i);
        }
    }
}
int main () {
    odd_series_1(20);
    printf("\n\n");
    odd_series_2(40, 60);
    return 0;
}