#include <stdio.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A4: Loops 2
// June 4, 2022

int main() {
    int beginning, number_of_bands, duration, total;
    printf("When does the first band come out?\n");
    scanf("%d", &beginning);
    printf("How many bands will be playing tonight?\n");
    scanf("%d", &number_of_bands);

    //for loop/ bands' star time schedule
    for (int i=0; i<number_of_bands; i++) {
        printf("How long does band number %d play?\n", i+1);
        scanf("%d", &duration);
        printf("Band #%d came out at %d minutes.\n", i+1, beginning);
        beginning=beginning+duration;
    }
    total = beginning;
    printf("The total set ended at %d minutes.\n", total);
    return 0;
}
