// EVEN AND ODD NUMBER IN C PROGRAMMING
#include<stdio.h>
void evenodd (int num) {
    if(num % 2 == 0) {
        printf("%d Is Even Number!\n",num);
    } else {
        printf("%d Is Odd Number!\n",num);
    }
}
int main () {
    evenodd(12);
    evenodd(29);
    return 0;
}