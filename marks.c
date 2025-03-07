#include <stdio.h>
int main(){
    int marks[3];  //Array to store marks
    float average;
    int sum =0;

    //Input marks
    printf("Enter marks for physics: ");
    scanf("%d", &marks[0]);

    printf("Enter marks for chemistry: ");
    scanf("%d", &marks[1]);

    printf("Enter marks for maths: ");
    scanf("%d", &marks[2]);

    //Calculating the sum
    for(int i = 0; i < 3; i++){
        sum += marks[i];
    }

    // Calculating the average
    average = (float)sum/3;

    //Displaying the results
    printf("Total Marks = %d\n", sum);
    printf("Average Marks = %.2f\n, average");

    return 0;
}
