#include <stdio.h>

int main() {
    float physics[4], chemistry[4], math[4];
    float avg_physics, avg_chemistry, avg_math, overall_avg;
    char *assessments[] = {"Assignment", "Course Work", "Mid-term", "End-term"};
    
    // Input marks for Physics
    printf("Enter marks for Physics:\n");
    float sum_physics = 0;
    for (int i = 0; i < 4; i++) {
        printf("  %s: ", assessments[i]);
        scanf("%f", &physics[i]);
        sum_physics += physics[i];
    }
    avg_physics = sum_physics / 4;
    
    // Input marks for Chemistry
    printf("Enter marks for Chemistry:\n");
    float sum_chemistry = 0;
    for (int i = 0; i < 4; i++) {
        printf("  %s: ", assessments[i]);
        scanf("%f", &chemistry[i]);
        sum_chemistry += chemistry[i];
    }
    avg_chemistry = sum_chemistry / 4;
    
    // Input marks for Math
    printf("Enter marks for Math:\n");
    float sum_math = 0;
    for (int i = 0; i < 4; i++) {
        printf("  %s: ", assessments[i]);
        scanf("%f", &math[i]);
        sum_math += math[i];
    }
    avg_math = sum_math / 4;
    
    // Calculate overall average
    overall_avg = (avg_physics + avg_chemistry + avg_math) / 3;
    
    // Display results
    printf("\nAverage Marks:\n");
    printf("Physics: %.2f\n", avg_physics);
    printf("Chemistry: %.2f\n", avg_chemistry);
    printf("Math: %.2f\n", avg_math);
    printf("Overall Average: %.2f\n", overall_avg);
    
    return 0;
}
