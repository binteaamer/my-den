/*Defne a date structure with variables day, month and year. Write functions to
1. Calculate the number of days between two days.
2. Find the day of the week for a given date
3. Check if a date is valid accounting for leap years.*/

#include <stdio.h>
#include <stdbool.h>
typedef struct  {
int day;
int month;
int year;
}time;

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool isValidDate(time date) {
    // Array of days in each month
    int daysInMonth[] = {31, 28 + isLeapYear(time.year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (time.year < 1 || time.month < 1 || time.month > 12 || time.day < 1 || time.day > daysInMonth[time.month - 1]) {
        return false;
    }

    return true;
}
    int calculateDaysBetween(time start, time end) {
    int days = 0;
    for (int year = start.year; year < end.year; year++) {
        days += isLeapYear(year) ? 366 : 365;
    }
    int daysInMonth[] = {31, 28 + isLeapYear(start.year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int month = start.month; month <= end.month; month++) {
        days += daysInMonth[month - 1];
    }

    return days;
}

      
void day_of_week(int date, int month, int year) {
    // Zeller's Congruence algorithm to calculate the day of the week , searched on google. 
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (date + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    const char*days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    printf("The day of the week for %d/%d/%d is: %s\n", date, month, year, days[h]);
}

int main() {
    time date1 , date2;

    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    
    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
      
    if (!isValidDate(date1) || !isValidDate(date2)) {
        printf("One or both of the dates are invalid!\n");
        return 1;
    }

    int daysBetween = calculateDaysBetween(date1, date2);
    printf("Number of days between the two dates: %d\n", daysBetween);

    printf("The day of the week for the first date: %s\n", findDayOfWeek(date1));
    printf("The day of the week for the second date: %s\n", findDayOfWeek(date2));

    return 0;
}
