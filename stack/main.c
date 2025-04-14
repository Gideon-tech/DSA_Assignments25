#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10 // Maximum size of stack

int stack[MAX];
int top = -1; // Initialize the stack as empty

// Function to push (insert) an element into the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value; // Increment top and add the value
        printf("%d pushed onto the stack\n", value);
    }
    display(); // Display stack after operation
}

// Function to pop (delete) an element from the stack
void pop() {
    if (top == -1) { //cecking if it empty;
        printf("Stack Underflow! Cannot pop\n");
    } else {
        printf("%d popped from the stack\n", stack[top--]); // Remove and decrement top
    }
    display(); // Display stack after operation
}

// Function to search for an element in the stack
void search(int value) {
    bool found = false;
    for (int i = 0; i <= top; i++) {
        if (stack[i] == value) {
            printf("%d found at position %d\n", value, i + 1);
            found = true;
            break;
        }
    }
    if (!found) {
        printf("%d not found in the stack\n", value);
    }
    display(); // Display stack after operation
}

// Function to sort the stack in ascending order
void sort() {
    if (top == -1) {
        printf("Stack is empty, nothing to sort\n");
        return;
    }
    for (int i = 0; i <= top; i++) {
        for (int j = 0; j < top - i; j++) {
            if (stack[j] > stack[j + 1]) {
                // Swap elements
                int temp = stack[j];
                stack[j] = stack[j + 1];
                stack[j + 1] = temp;
            }
        }
    }
    printf("Stack sorted in ascending order\n");
    display(); // Display stack after operation
}

// Function to merge a second stack
void merge(int stack2[], int size2) {
    for (int i = 0; i < size2; i++) {
        if (top == MAX - 1) {
            printf("Stack Overflow! Cannot merge further\n");
            break;
        }
        push(stack2[i]); // Push elements of the second stack onto the first
    }
    printf("Stacks merged successfully\n");
    display(); // Display stack after operation
}

// Function to display the stack
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value, size2;
    int stack2[MAX];

    // Input initial stack values
    printf("Enter the number of initial elements for the stack (up to %d): ", MAX);
    scanf("%d", &size2);

    if (size2 > MAX) {
        printf("Stack size exceeds the maximum limit of %d. Exiting...\n", MAX);
        return 1;
    }

    printf("Enter the initial elements for the stack:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &value);
        push(value); // Automatically displays stack after initial push
    }

    // Menu for stack operations
    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Push\n2. Pop\n3. Search\n4. Sort\n5. Merge\n6. Display\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
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
            printf("Enter size of second stack (up to %d): ", MAX);
            scanf("%d", &size2);

            if (size2 > MAX) {
                printf("Second stack size exceeds the limit. Aborting merge...\n");
                break;
            }

            printf("Enter elements of the second stack:\n");
            for (int i = 0; i < size2; i++) {
                scanf("%d", &stack2[i]);
            }
            merge(stack2, size2);
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
