#include <stdio.h>
#include <math.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A2: Variable Assignment 2
// May 18, 2022

int main() {
    int l,w,A,P;          // l = length, w = width, A = area, P = perimeter

    printf("Enter the length of the field:\n");
    scanf("%d", &l);

    printf("Enter the width of the field:\n");
    scanf("%d", &w);

    A = l*w;         //calculating area
    P = 2*(l+w);     //calculating perimeter

    printf("Area = %d\nPerimeter = %d\n", A,P);

    return 0;
}
