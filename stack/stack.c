#include <stdio.h>

#define MAXSIZE 10

int stack[MAXSIZE];
int top = -1;

void push() {
    int n;

    if (top == MAXSIZE - 1) {
        printf("\nStack Overflow");
    } else {
        printf("Enter element: ");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow (Empty Stack)");
    } else {
        printf("\nPopped element: %d", stack[top]);
        top--;
    }
}

void display() {
    int i;

    if (top == -1) {
        printf("\nStack is Empty");
    } else {
        printf("\nStack elements:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;

    do {
        printf("\n\n_____ STACK MENU _____");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");

        scanf("%d", &choice);   // fixed input

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("\nExiting program...");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while (choice != 4);

    return 0;
}