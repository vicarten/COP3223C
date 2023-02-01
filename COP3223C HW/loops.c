#include <stdio.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A4: Loops 1
// June 4, 2022

int main() {
    int shape, rows, stars, check;
    printf("What shape would you like to make? (1 - Triangle, 2 - Stripes)\n");
    scanf("%d", &shape);
    // 1 - Triangle
    if (shape == 1) {
        printf("How many rows would you like?\n");
        scanf("%d", &rows);
        for (int r=1; r<=rows; r++) {
            for (int s=1; s<=r; s++) {
                printf("*");
            }
            printf("\n");
        }
    }
    // 2 - Stripes
    else if (shape == 2) {
        printf("How many rows would you like?\n");
        scanf("%d", &rows);
        printf("How many stars in the first row?\n");
        scanf("%d", &stars);
        for (int r = 1; r <= rows; r++) {
            check = r / 2;
            if (r == check * 2) {
                for (int s = 1; s < stars; s++) {
                    printf("*");
                }

            } else {
                for (int s = 1; s <= stars; s++) {
                    printf("*");
                }
            }
            printf("\n");
        }
    } else {
        printf("You should choose 1 - Triangle or 2 - Stripes. Try again.\n");
    }


    return 0;
}