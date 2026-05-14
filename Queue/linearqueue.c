#include <stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE];
int rear = -1;
int front = 0;

// Function declarations
void insert();
void delete_q();
void display();

int main() {
    int choice;

    do {
        printf("\n_____Queue_____");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: insert(); break;
            case 2: delete_q(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}

// Insert function
void insert() {
    int n;
    if(rear == MAXSIZE - 1) {
        printf("Queue Overflow\n");
    } else {
        printf("Enter an element: ");
        scanf("%d", &n);
        rear++;
        queue[rear] = n;
    }
}

// Delete function
void delete_q() {
    int n;
    if(front > rear) {
        printf("Queue Underflow\n");
    } else {
        n = queue[front];
        printf("Deleted Element: %d\n", n);
        front++;
    }
}

// Display function
void display() {
    int i;
    if(front > rear) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue Elements:\n");
        for(i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}