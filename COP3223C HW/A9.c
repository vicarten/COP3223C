#include <stdio.h>
#include <string.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A9: 2D Arrays 1
// July 18, 2022

void print_classes(char schedule[5][50], int size){
    for (int i=0; i<size; i++){
        printf("%d. %s\n", i+1, schedule[i]);
    }
}

int main() {
    char class_list[5][50];
    int enrolled = 0;
    char option[50] = "NOT Done";

    printf("Welcome to class registration!\n");
    printf("Enter a course code:\n");
    scanf("%s", option);
    while (strcmp(option, "EXIT") !=0){
        if (enrolled < 5) {
            strcpy(class_list[enrolled], option);
            enrolled++;
        } else {
            int value = -1;
            print_classes(class_list, enrolled);
            printf("6. %s\n", option);
            printf("Which class would you like to delete (Enter a number 1-6)\n");
            scanf("%d", &value);
            while (value < 1 || value>6) {
                printf("Don't be dumb...\n");
                printf("Which class would you like to delete (Enter a number 1-6)\n");
                scanf("%d", &value);
            }
            value -= 1;
            if (value!=5){
                strcpy(class_list[value], option);
            }
            printf("Message...\n");
        }
        print_classes(class_list,enrolled);
        printf("Enter a course code:\n");
        scanf("%s", option);
    }
    return 0;
}
