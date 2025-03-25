#include <stdio.h>

int main() {
    int N, X;
    
    // Get number of domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);
    char domestic[N][50];
    
    // Input domestic animals
    printf("Enter the names of %d domestic animals:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%s", domestic[i]);
    }
    
    // Get number of wild animals
    printf("Enter the number of wild animals: ");
    scanf("%d", &X);
    char wild[X][50];
    
    // Input wild animals
    printf("Enter the names of %d wild animals:\n", X);
    for (int i = 0; i < X; i++) {
        scanf("%s", wild[i]);
    }
    
    // Print all animals
    printf("\nList of all animals:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", domestic[i]);
    }
    for (int i = 0; i < X; i++) {
        printf("%s\n", wild[i]);
    }
    
    return 0;
}
