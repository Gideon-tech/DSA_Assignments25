#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10 // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1; // Initialize the queue as empty

// Function to check if the queue is empty
bool isEmpty() {
    return front == -1;
}

// Function to check if the queue is full
bool isFull() {
    return rear == MAX - 1;
}

// Function to enqueue (insert) an element into the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) front = 0; // Set front to 0 when the first element is added
        queue[++rear] = value; // Increment rear and add the value
        printf("%d enqueued into the queue\n", value);
    }
    display(); // Display the queue after the operation
}

// Function to dequeue (delete) an element from the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue\n");
    } else {
        printf("%d dequeued from the queue\n", queue[front]); // Remove the front element
        if (front == rear) {
            // Reset the queue when it becomes empty
            front = -1;
            rear = -1;
        } else {
            front++; // Increment front
        }
    }
    display(); // Display the queue after the operation
}

// Function to search for an element in the queue
void search(int value) {
    bool found = false;
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        for (int i = front; i <= rear; i++) {
            if (queue[i] == value) {
                printf("%d found at position %d\n", value, i - front + 1);
                found = true;
                break;
            }
        }
        if (!found) {
            printf("%d not found in the queue\n", value);
        }
    }
    display(); // Display the queue after the operation
}

// Function to sort the queue in ascending order
void sort() {
    if (isEmpty()) {
        printf("Queue is empty, nothing to sort\n");
    } else {
        for (int i = front; i <= rear; i++) {
            for (int j = front; j < rear - (i - front); j++) {
                if (queue[j] > queue[j + 1]) {
                    // Swap elements
                    int temp = queue[j];
                    queue[j] = queue[j + 1];
                    queue[j + 1] = temp;
                }
            }
        }
        printf("Queue sorted in ascending order\n");
    }
    display(); // Display the queue after the operation
}

// Function to merge a second queue into the current queue
void merge(int queue2[], int size2) {
    for (int i = 0; i < size2; i++) {
        if (isFull()) {
            printf("Queue Overflow! Cannot merge further\n");
            break;
        }
        enqueue(queue2[i]); // Add elements of the second queue to the current queue
    }
    printf("Queues merged successfully\n");
    display(); // Display the queue after the operation
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value, size2;
    int queue2[MAX];

    // Input initial queue values
    printf("Enter the number of initial elements for the queue (up to %d): ", MAX);
    scanf("%d", &size2);

    if (size2 > MAX) {
        printf("Queue size exceeds the maximum limit of %d. Exiting...\n", MAX);
        return 1;
    }

    printf("Enter the initial elements for the queue:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &value);
        enqueue(value); // Automatically displays the queue after each enqueue
    }

    // Menu for queue operations
    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Search\n4. Sort\n5. Merge\n6. Display\n7. Exit\n");
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
            printf("Enter value to search: ");
            scanf("%d", &value);
            search(value);
            break;
        case 4:
            sort();
            break;
        case 5:
            printf("Enter size of second queue (up to %d): ", MAX);
            scanf("%d", &size2);

            if (size2 > MAX) {
                printf("Second queue size exceeds the limit. Aborting merge...\n");
                break;
            }

            printf("Enter elements of the second queue:\n");
            for (int i = 0; i < size2; i++) {
                scanf("%d", &queue2[i]);
            }
            merge(queue2, size2);
            break;
        case 6:
            display();
            break;
        case 7:
            printf("Exiting program...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
