// EVEN AND ODD SERIES FROM 1 TO N AND RANGE1 TO RANGE2 IN C PROGRAMMING
#include<stdio.h>
void even_odd_series_1 (int N) {
    printf("Even Numbers From 1 To %d\n",N);
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            printf("%d ",i);
        }
    }
    printf("\nOdd Numbers From 1 To %d\n",N);
    for(int i = 1; i <= N; i++) {
        if(i % 2 != 0) {
            printf("%d ",i);
        }
    }
}
void even_odd_series_2 (int range1, int range2) {
    printf("Even Numbers From %d To %d\n",range1, range2);
    for(int i = range1; i <= range2; i++) {
        if(i % 2 == 0) {
            printf("%d ",i);
        }
    }
    printf("\nOdd Numbers From %d To %d\n",range1, range2);
    for(int i = range1; i <= range2; i++) {
        if(i % 2 != 0) {
            printf("%d ",i);
        }
    }
}
int main () {
    even_odd_series_1 (30);
    printf("\n\n");
    even_odd_series_2 (20, 50);
    return 0;
}