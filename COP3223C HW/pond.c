#include <stdio.h>
#include <math.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A2: Variable Assignment 1
// May 18, 2022

int main() {
    int r; // r is the radius
    double A, pi = 3.14;

    printf("Enter the radius of the pond.\n");
    scanf("%d", &r);
    A = (pi* pow(r,2))/2; // finding the area of pond via  area formula for the circle divided by two
    printf("Area = %.2lf\n",A);

    return 0;
}
