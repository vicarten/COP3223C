#include <stdio.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A6: Arrays 1
// June 27, 2022


// Print out the array in a single line
// For example if the array has the values 1, 2 and 3 it will print out:
// Array: 1 2 3
void print_array(int arr[], int size) {
    printf("Array:");
    int i = 0;
    while (i < size){
        printf(" %d", arr[i]);
        i++;
    }
    printf("\n");
}

// Add all the values together to get the sum of the entire array.
// Example: if the values are 1, 2 and 3 it would return 6.
int add_together(int arr[], int size) {
    int sum=0;
    for(int i=0; i<size; i++) {
        sum += arr[i];
    }
    return sum;
}

// find the lowest value in the array and return that value.
// Example: if the values are 3, 1, 2, the function returns 1
// All values will be under 1,000,000
int find_lowest(int arr[], int size) {
    int lowest=1000000;
    for (int i=0; i<size; i++){
        if (arr[i]<lowest) {
            lowest=arr[i];
        }
    }
    return lowest;
}
// Find the average value within the array with the lowest dropped
// You will have an array with size 2 or greater.
// Example if the values are 1, 2 and 3, the average would be 2.5
// You must call find_lowest, and add_together to recieve full credit.
double average_drop1(int arr[], int size) {
    double average;
    average = (add_together(arr,size)-find_lowest(arr,size))/((double)size-1);
    return average;
}
int main() {
    // Sample run
    printf("Example 1\n");
    int arr1[5] = {1, 2, 3, 4, 5};
    print_array(arr1, 5);
    printf("%d\n", add_together(arr1, 5));
    printf("%d\n", find_lowest(arr1, 5));
    printf("%.4lf\n\n", average_drop1(arr1, 5));
    printf("Example 2\n");
    int arr2[7] = {5, 5, 5, 5, 5, 5, 5};
    print_array(arr2, 7);
    printf("%d\n", add_together(arr2, 7));
    printf("%d\n", find_lowest(arr2, 7));
    printf("%.4lf\n\n", average_drop1(arr2, 7));
    printf("Example 3\n");
    int arr3[4] = {30, 20, 10, 10};
    print_array(arr3, 4);
    printf("%d\n", add_together(arr3, 4));
    printf("%d\n", find_lowest(arr3, 4));
    printf("%.4lf\n\n", average_drop1(arr3, 4));
    printf("Example 4\n");
    int arr4[4] = {100, 33, 60, 40};
    print_array(arr4, 4);
    printf("%d\n", add_together(arr4, 4));
    printf("%d\n", find_lowest(arr4, 4));
    printf("%.4lf\n\n", average_drop1(arr4, 4));
    return 0;
}