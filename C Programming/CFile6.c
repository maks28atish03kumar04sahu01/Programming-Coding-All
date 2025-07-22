// ARITHMETIC OPERATION IN C PROGRAMMING
#include<stdio.h>
#include<stdlib.h>
#include<Math.h>
int main () {
    while (1) {
        int num1, num2, choice;
        printf("Enter Num1 Value: ");
        scanf("%d",&num1);
        
        printf("Enter Num2 Value: ");
        scanf("%d",&num2);

        printf("Enter Choice For Operation: ");
        scanf("%d",&choice);

        if(choice == 0) {
            printf("Exiting The Program...\n");
            exit(0);
        }

        switch (choice) {
            case 1:
                printf("Addition: %d + %d = %d\n", num1, num2, (num1 + num2));
                break;
            case 2:
                printf("Subtraction: %d - %d = %d\n", num1, num2, (num1 - num2));
                break;
            case 3:
                printf("Multiplication: %d * %d = %d\n", num1, num2, (num1 * num2));
                break;
            case 4:
                if (num2 == 0)
                    printf("Division by zero error!\n");
                else
                    printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                break;
            case 5:
                if (num2 == 0)
                    printf("Modulo by zero error!\n");
                else
                    printf("Modulo: %d %% %d = %.2f\n", num1, num2, fmod(num1, num2));
                break;
            default:
                printf("Invalid Option Choosed By User!");
                exit(0);
        }
    }
    return 0;
}