#include <stdio.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A5: Functions 2
// June 20, 2022

double regularPay(double payPerHour, int regWorkWeek, int hoursWorked);
double overtimePay(double payPerHour, int regWorkWeek, int hoursWorked, double overtimeRate);


int main() {
    double payPerHour, overtimeRate, totalPay, total = 0;
    int regWorkWeek, hoursWorked, numberOfWeeks;

    printf("How much (in dollars) are you paid per hour?\n");
    scanf(" %lf", &payPerHour);

    printf("How many hours in the regular work week?\n");
    scanf(" %d", &regWorkWeek);

    printf("What is the overtime rate?\n");
    scanf(" %lf", &overtimeRate);

    printf("How many weeks are you working?\n");
    scanf(" %d", &numberOfWeeks);

    //loop for total
    for (int i=1; i<=numberOfWeeks; i++) {
        printf("How many hours did you work in week %d?\n", i);
        scanf("%d", &hoursWorked);
        totalPay = regularPay(payPerHour, regWorkWeek, hoursWorked) + overtimePay(payPerHour, regWorkWeek, hoursWorked, overtimeRate);
        printf("Week %d regular pay = $%.2lf, overtime pay = $%.2lf, total pay = $%.2lf.\n", i, regularPay(payPerHour, regWorkWeek, hoursWorked), overtimePay(payPerHour, regWorkWeek, hoursWorked, overtimeRate), totalPay);
        total += totalPay;
    }
    printf("Total pay for %d weeks = $%.2lf.\n", numberOfWeeks, total);

    return 0;
}
// Part 1
double regularPay(double payPerHour, int regWorkWeek, int hoursWorked){
    if (hoursWorked >= regWorkWeek) {
        return regWorkWeek * payPerHour;
    } else {
        return hoursWorked *payPerHour;
    }
}

// Part 2
double overtimePay(double payPerHour, int regWorkWeek, int hoursWorked, double overtimeRate){
    if (hoursWorked>regWorkWeek) {
        return (hoursWorked-regWorkWeek)*payPerHour*overtimeRate;
    } else {
        return 0;
    }
}
