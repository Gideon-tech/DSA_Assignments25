#include <stdio.h>

// Function to display the elements of the array
void display(int arr[], int n){
    printf("Array elements: ");
    for ( int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

// Insert element at the beginning of the array
void insertAtBeginning(int arr[], int *n, int element){
    for (int i = *n; i > 0; i--){
        arr[i] = arr[i - 1];
   }
   arr[0] = element;
   (*n)++;

}


// Insert element at the middle of the array
void insertAtMiddle(int arr[], int *n, int element){
    int middle = *n / 2;
    for (int i = *n; i > middle; i--){
        arr[i] = arr[i - 1];

    }
    arr[middle] = element;
    (*n)++;
}

// Insert element at the end of the array
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