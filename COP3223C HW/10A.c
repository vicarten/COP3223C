#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Victoria Ten
// COP 3223C - Summer 2022
// A10: Structs 1
// July 31, 2022


struct Node {
    char data[10];
    char name[30];
    struct Node *next;
};


int menu(){
    printf("What courses would you like to do?\n");
    printf("1. Add Course\n");
    printf("2. Drop Course\n");
    printf("3. Print Schedule\n");
    printf("4. Exit\n");
    int option;
    scanf("%d", &option);
    return option;
}

int main() {
    struct Node *head = NULL;
    struct Node *curr = NULL;
    struct Node *temp = NULL;
    char search[10];

    int option = -1;
    while (option != 4) {
        option = menu();

        switch (option) {
            //Add Course:
            case 1:
                temp = (struct Node *) malloc(sizeof(struct Node));
                printf("What course name would you like to add?\n");
                scanf("%s", temp->name);
                printf("What course number would you like to add?\n");
                scanf("%s", temp->data);
                temp->next = NULL;


                if (head == NULL) {
                    head = temp;
                } else {
                    if (strcmp(head->data, temp->data) > 0) {
                        temp->next = head;
                        head = temp;
                    } else {
                        curr = head;
                        while (curr->next != NULL && strcmp(curr->next->data, temp->data) < 0) {
                            curr = curr->next;
                        }

                        temp->next = curr->next;
                        curr->next = temp;
                    }
                }
                printf("Added!\n");
                break;

                //Drop Course
            case 2:
                printf("What would you like to delete?\n");
                scanf("%s", search);

                // Searching...
                if (head == NULL) {
                    printf("The course list is empty.\n\n");
                } else if (strcmp(search, head->data)==0) {
                    // delete the head
                    head = head->next;
                } else {
                    curr = head;
                    // go to the end OR go to the one before we need to delete.
                    while (curr->next != NULL && curr->next->data != search) {
                        curr = curr->next;
                    }

                    if (curr->next == NULL) {
                        printf("This course is not in your schedule.\n\n");
                    } else {
                        curr->next = curr->next->next;
                    }
                }
                break;

                //Print Schedule

            case 3:
                curr = head;
                int i=1;
                if (curr==NULL){
                    printf("You aren't currently taking any courses.\n\n");
                } else {
                    printf("Course Schedule:\n");
                    while (curr != NULL) {
                        printf("%d. %s - %s\n", i, curr->data, curr->name);
                        i++;
                        curr = curr->next;
                    }
                    printf("\n");
                }

                break;
        }
    }
    return 0;
}
