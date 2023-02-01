#include <stdio.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A5: Functions 1
// June 18, 2022

// Part 1
double regularPay(double payPerHour, int regWorkWeek, int hoursWorked){
    if (hoursWorked >= regWorkWeek) {
        return regWorkWeek * payPerHour;
    } else {
        return hoursWorked *payPerHour;
    }
}
void testRegularPay() {
    printf("%.2lf\n", regularPay(8.25, 40, 30));
    printf("%.2lf\n", regularPay(12.50, 30, 40));
    printf("%.2lf\n", regularPay(9.99, 80, 80));
}

// Part 2
double overtimePay(double payPerHour, int regWorkWeek, int hoursWorked, double overtimeRate){
    if (hoursWorked>regWorkWeek) {
        return (hoursWorked-regWorkWeek)*payPerHour*overtimeRate;
    } else {
        return 0;
    }
}
void testOvertimePay() {
    printf("%.2lf\n", overtimePay(8.25, 40, 30, 1.5));
    printf("%.2lf\n", overtimePay(12.50, 30, 40, 2.0));
    printf("%.2lf\n", overtimePay(9.99, 80, 100, 2.5));
}

int main() {
    testRegularPay();
    testOvertimePay();
    return 0;
}