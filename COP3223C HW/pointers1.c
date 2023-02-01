#include <stdio.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A8: Pointers 1
// July 9, 2022

void F1(int *a, int *b);
int F2(int arr[], int size);
int main() {
    // Pointers
    int a = 10;
    int b = 20;

    //Function 1
    printf("Function 1:\n");
    printf("Start (main):\na=%d\nb=%d\n", a,b);
    F1(&a, &b);
    printf("End (main):\n");
    printf("a=%d\nb=%d\n", a,b);

    //Function 2
    printf("\nFunction 2:\n");
    int arr[7]={3,5,10,15,35,17,2};
    printf("%d\n", F2(arr, 7));

    return 0;
}

void F1(int *a, int *b) {
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}
int F2(int arr[], int size) {
    int changes = 0;
    for(int j; j<size; j++) {
        if (arr[j] < 10) {
            arr[j] = 10;
            changes++;
        } else if (arr[j] > 20) {
            arr[j] = 20;
            changes++;
        }
    }
    return changes;
}