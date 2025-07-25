// CALCULATE YOUR AGE IN C PROGRAMMING
// #include<stdio.h>
// #include<time.h>
// int main () {
//     time_t t = time(NULL);
//     struct tm *current_time = localtime(&t);

//     int today = current_time->tm_mday;
//     int tomonth = current_time->tm_mon + 1;
//     int toyear = current_time->tm_year + 1900;
//     printf("TODAY: %d-%d-%d\n",today, tomonth, toyear);

//     int uday, umonth, uyear;
//     printf("Your Birth Day: ");
//     scanf("%d",&uday);
//     printf("Your Birth Month: ");
//     scanf("%d",&umonth);
//     printf("Your Birth Year: ");
//     scanf("%d",&uyear);

//     int Your_Age_Day = today - uday;
//     int Your_Age_Month = tomonth - umonth;
//     int Your_Age_Year = toyear - uyear;

//     printf("Your Current Age: \n");

//     if(Your_Age_Day < 0) {
//         int sol1 = (-1) * Your_Age_Day;
//         printf("You Age Day: %d\n",sol1);
//     } else {
//         printf("You Age Day: %d\n",Your_Age_Day);
//     }

//     if(Your_Age_Month < 0) {
//         int sol2 = (-1) * Your_Age_Month;
//         printf("Your Age Month: %d\n",sol2);
//     } else {
//         printf("Your Age Month: %d\n",Your_Age_Month);
//     }
//     printf("Your Age year: %d\n",Your_Age_Year);

//     return 0;
// }

#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);

    int today = current_time->tm_mday;
    int tomonth = current_time->tm_mon + 1;
    int toyear = current_time->tm_year + 1900;

    printf("TODAY: %02d-%02d-%04d\n", today, tomonth, toyear);

    int uday, umonth, uyear;
    printf("Your Birth Day: ");
    scanf("%d", &uday);

    printf("Your Birth Month: ");
    scanf("%d", &umonth);

    printf("Your Birth Year: ");
    scanf("%d", &uyear);

    int age_day = today - uday;
    int age_month = tomonth - umonth;
    int age_year = toyear - uyear;

    if (age_day < 0) {
        age_day += 30;
        age_month--;
    }

    if (age_month < 0) {
        age_month += 12;
        age_year--;
    }

    printf("Your Current Age: \n");
    printf("Years: %d\n", age_year);
    printf("Months: %d\n", age_month);
    printf("Days: %d\n", age_day);

    return 0;
}
