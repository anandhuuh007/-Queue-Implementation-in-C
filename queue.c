#include <stdio.h>   // for printf, scanf
#include <stdlib.h>  // for exit()

#define MAX 100      // maximum size of the queue

int queue[MAX];     // array that holds queue elements
int front = -1, rear = -1; // front = index of first element, rear = index of last element

void enqueue(int x) {
    if (rear == MAX - 1) {             // if rear reached end of array -> no space (simple overflow check)
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1) front = 0;        // if queue was empty, set front to 0
    queue[++rear] = x;                 // increment rear then store x at queue[rear]
    printf("%d enqueued successfully.\n", x);
}

void dequeue() {
    if (front == -1 || front > rear) { // empty when front is -1 or front passed rear
        printf("Queue Underflow!\n");
        return;
    }
    printf("%d dequeued successfully.\n", queue[front++]); // print element then increment front
    // Note: this implementation doesn't reset front/rear to -1 after last element removed
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\nQueue Menu\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);   // clean exit
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
