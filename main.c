
#include <stdio.h>

int main() {
    int N, X, i;
    printf("Enter the number of domestic animals: \n");
    scanf("%d", &N);
    char domestic_animals[N][50];
    printf("Enter the names of %d domestic animals:\n", N);
    for (i = 0; i < N; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", domestic_animals[i]);
    }

    printf("Enter the number of wild animals: ");
    scanf("%d", &X);
    char wild_animals[X][50];
    printf("Enter the names of %d wild animals:\n", X);
    for (i = 0; i < X; i++) {
        printf("Wild animal %d: ", i + 1);
        scanf("%s", wild_animals[i]);
    }

    printf("Domestic animals:\n");
    for (i = 0; i < N; i++) {
        printf("%s\n", domestic_animals[i]);
    }

    printf("Wild Animals:\n");
    for (i = 0; i < X; i++) {
        printf("%s\n", wild_animals[i]);
    }

    printf("Total Animals (Domestic + Wild):\n");
    for (i = 0; i < N; i++) {
        printf("%s\n", domestic_animals[i]);
    }
    for (i = 0; i < X; i++) {
        printf("%s\n", wild_animals[i]);
    }
}
