# Array Insertion Assignment by Big O Titans

## Description

I inserted elements at the beginning, middle, and at the end of the array using the C programming language. This assignment demonstrates how to efficiently manipulate arrays by adding new elements at different positions while ensuring proper memory management.

## Objectives

- Understand and implement array insertion in C.
- Insert elements at the beginning, middle, or end of an array.
- Ensure efficient handling of array operations without data loss.

## Instructions

1. Write a C program that:
   - Declares an array with a fixed size.
   - Accepts user input for the number of elements.
   - Allows insertion of a new element at a specified position.
   - Displays the updated array after insertion.
2. Compile the program using:
   ```sh
   gcc array_insertion.c -o array_insertion
   ```
3. Run the program:
   ```sh
   ./array_insertion
   ```

## Example Output

```
Enter the number of elements: 5
Enter 5 elements: 10 20 30 40 50
Enter the element to insert: 25
Enter the position (0-based index): 2
Updated array: 10 20 25 30 40 50
```

## Code Implementation

```c
#include <stdio.h>

//Function to display the elements of an array 
void display(int arr[], int n){
    printf("Array elements: ");
    for ( int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


//Insert element at the middle of an array
void insertAtBeginning(int arr[], int *n, int element){
    for (int i = *n; i > 0; i--){
        arr[i] = arr[i - 1];
   }
   arr[0] = element;
   (*n)++;
}


//Insert element at the middle of any array
void insertAtMiddle(int arr[], int *n, int element){
    int middle = *n / 2;
    for (int i = *n; i > middle; i--){
        arr[i] = arr[i - 1];
    }
    arr[middle] = element;
    (*n)++;
}


//Insert element at the end of an array
void insertAtEnd(int arr[], int *n, int element){
    arr[*n] = element;
    (*n)++;
}

// Main function
int main(){
    int arr[10] = {1,2,3};
    int n = 3;

    printf("Original array:\n");
    display(arr, n);

    insertAtBeginning(arr, &n, 0);
    printf("After inserting 0 at the beginning:\n");
    display(arr, n);

    insertAtMiddle(arr, &n, 99);
    printf("After inserting 99 at the middle:\n");
    display(arr, n);

    insertAtEnd(arr, &n, 100);
    printf("After inserting 100 at the end:\n");
    display(arr, n);

    return 0;
}
```

## Technologies Used

- C Programming Language
- Arrays and Data Structures
- GCC Compiler



## Contributin
Contributions are welcome! Please fork the repository and submit a pull request.

## Contact
For any inquiries, please contact Maku Gideon via LinkedIn or email at paintingislife592@gmail.com.

