// CALCULATE YOUR AGE IN C++ PROGRAMMING
#include <iostream>
#include <ctime>
int main () {
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);

    int today = current_time->tm_mday;
    int tomonth = current_time->tm_mon + 1;
    int toyear = current_time->tm_year + 1900;

    std::cout << "Today: " << today << " - " << tomonth << " - " << toyear << std::endl;

    int uday, umonth, uyear;
    std::cout << "Your Birth Day: ";
    std::cin >> uday;
    std::cout << "Your Birth Month: ";
    std::cin >> umonth;
    std::cout << "Your Birth Month: ";
    std::cin >> uyear;

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
    std::cout << "Your Current Age: " << std::endl;
    std::cout << "Years: " << age_year << std::endl;
    std::cout << "Months: " << age_month << std::endl;
    std::cout << "Days: " << age_day << std::endl;
    return 0;
}