#include <stdio.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A3: If Statements 1
// May 30, 2022

int main() {
    int a1, a2, a3;
    double total;

    // Q1: Going before/after 5pm
    printf("Are you going to the movie before 5PM?\n");
    scanf("%d", &a1);
    if (a1 == 1) {
        total = 12.50;
    } else {
            total = 15;
    }

    // Q2: 5 or more tickets
    printf("How many people are going?\n");
    scanf("%d", &a2);
    if (a2 >= 5) {
        total = (total * a2) * .90;
    } else {
        total = total * a2;
    }

    // Q3: Student or not
    printf("Are you a student?\n");
    scanf("%d", &a3);
    if (a3 == 1) {
        total = total * .85;
    } else {
        total = total;
    }

    // Answer: Total price
    printf("The group\'s price is $%.2lf.\n", total);
    return 0;
}
