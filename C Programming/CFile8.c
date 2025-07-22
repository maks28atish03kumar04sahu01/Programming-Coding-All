// EVEN NUMBER SERIES FROM 1 TO N AND RANGE1 TO RANGE2 IN C PROGRAMMING
#include<stdio.h>
void even_series_1 (int N) {
    printf("Even Number From 1 To %d\n",N);
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            printf("%d ",i);
        }
    }
}
void even_series_2 (int range1, int range2) {
    printf("Even Number From %d To %d\n", range1, range2);
    for(int i = range1; i <= range2; i++) {
        if(i % 2 == 0) {
            printf("%d ",i);
        }
    }
}
int main () {
    even_series_1(20);
    printf("\n\n");
    even_series_2(40, 60);
    return 0;
}