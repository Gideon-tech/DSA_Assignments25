#include <stdio.h>

// Function to validate input
float getValidMarks(const char *assessment) {
    float marks;
    int status;

    do {
        printf("  %s: ", assessment);
        status = scanf("%f", &marks);

        // Check if input is valid and within range
        if (status != 1 || marks < 0 || marks > 100) {
            printf("Invalid input! Please enter a numeric value between 0 and 100.\n");

            // Clear input buffer
            while (getchar() != '\n');
        }

    } while (status != 1 || marks < 0 || marks > 100);

    return marks;
}

int main() {
    float physics[4], chemistry[4], math[4];
    float average_physics, average_chemistry, average_math, overall_average;
    char *assessments[] = {"Assignment", "Course Work", "Mid-term", "End-term"};
    
    // Input marks for Physics
    printf("Enter marks for Physics:\n");
    float sum_physics = 0;
    for (int i = 0; i < 4; i++) {
        physics[i] = getValidMarks(assessments[i]);
        sum_physics += physics[i];
    }
    average_physics = sum_physics / 4;
    
    // Input marks for Chemistry
    printf("Enter marks for Chemistry:\n");
    float sum_chemistry = 0;
    for (int i = 0; i < 4; i++) {
        chemistry[i] = getValidMarks(assessments[i]);
        sum_chemistry += chemistry[i];
    }
    average_chemistry = sum_chemistry / 4;
    
    // Input marks for Math
    printf("Enter marks for Math:\n");
    float sum_math = 0;
    for (int i = 0; i < 4; i++) {
        math[i] = getValidMarks(assessments[i]);
        sum_math += math[i];
    }
    average_math = sum_math / 4;
    
    // Calculate overall average
    overall_average = (average_physics + average_chemistry + average_math) / 3;
    
    // Display results
    printf("\nAverage Marks:\n");
    printf("Physics: %.2f\n", average_physics);
    printf("Chemistry: %.2f\n", average_chemistry);
    printf("Math: %.2f\n", average_math);
    printf("Overall Average: %.2f\n", overall_average);
    
    return 0;
}