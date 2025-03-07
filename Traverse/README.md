# Array Traversal by Big O Titans

## Description
This project demonstrates the concept of array traversal in the C programming language. The program stores five integer elements in an array and uses a `for` loop to iterate through the array elements, printing each element alongside its index.

## Prerequisites
- Basic understanding of C programming
- Installed C compiler (e.g., GCC)

## Code Overview
```c
#include <stdio.h>
int main(){
     int age[5] = {10, 20, 30, 40, 50}; // Array storing 5 elements
     int i;

     printf("Elements of an Array are: \n");
     
     // Array Traversal using a for loop
     for (i = 0; i < 5; i++){
        printf("Element at index %d: %d\n", i, age[i]);
     }

    return 0;
}
```

## Explanation
1. **Array Declaration:**
   - The array `age` is declared with five elements: `{10, 20, 30, 40, 50}`.

2. **Loop Traversal:**
   - A `for` loop is used to iterate through the array.
   - The loop index `i` starts at 0 and increments up to 4.
   - Each iteration prints the index and the corresponding array element.

3. **Output:**
```
Elements of an Array are:
Element at index 0: 10
Element at index 1: 20
Element at index 2: 30
Element at index 3: 40
Element at index 4: 50
```

## How to Run
1. Copy the code into a file named `array_traversal.c`.
2. Open a terminal or command prompt.
3. Compile the code using the GCC compiler:
   ```
   gcc array_traversal.c -o array_traversal
   ```
4. Run the compiled program:
   ```
   ./array_traversal
   ```
