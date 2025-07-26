//write a program in c to take number of days as input and print year,months and days

#include <stdio.h>
int main()
{
    int days, years, months,month_in_days, remainingDays;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    month_in_days = days % 365;
    months = month_in_days / 30;
    remainingDays = month_in_days % 30;
    printf("Years: %d\nMonths: %d\nDays: %d", years, months, remainingDays);
    return 0;
}
