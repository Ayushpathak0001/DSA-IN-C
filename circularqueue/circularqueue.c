#include <stdio.h>
#define MAXSIZE 10

int cq[MAXSIZE], rear = -1, front = -1;

void insert() {
    int n;

    if ((rear + 1) % MAXSIZE == front) {
        printf("Queue is overflow\n");
    } else {
        printf("Enter an element to insert: ");
        scanf("%d", &n);

        if (rear == -1 && front == -1) {
            rear = front = 0;
        } else {
            rear = (rear + 1) % MAXSIZE;
        }

        cq[rear] = n;
    }
}

void delete_cq() {
    int n;

    if (rear == -1 && front == -1) {
        printf("Queue is Empty\n");
    } else {
        n = cq[front];

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAXSIZE;
        }

        printf("Deleted element: %d\n", n);
    }
}

void display() {
    int i;

    if (rear == -1 && front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Elements of Queue: ");

        for (i = front; i != rear; i = (i + 1) % MAXSIZE) {
            printf("%5d", cq[i]);
        }

        printf("%5d\n", cq[i]);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete_cq();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

