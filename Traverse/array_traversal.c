#include <stdio.h>
int main(){
     int age[5] = {10, 20, 30, 40, 50}; //Array storing 5 elements
     int i; 

     printf("Elements of an Array are: ");
     
     //Array Traversal using a for loop
     for (i = 0; i < 5; i++){
        printf("Element at index %d: %d\n", i, age[i]);
     }

    return 0;
}