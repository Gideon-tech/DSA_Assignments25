# Student Marks Average Program

## Overview
This C program calculates the average marks obtained by a student in three subjects: **Physics, Chemistry, and Math**. Each subject consists of four different assessments:
- Assignment
- Course Work
- Mid-term
- End-term

The program computes the average for each subject and an overall average across all subjects.

## How It Works
1. The program prompts the user to enter marks for each assessment in Physics, Chemistry, and Math.
2. It calculates the average for each subject by summing up the four assessment scores and dividing by 4.
3. The overall average is calculated by taking the mean of the three subject averages.
4. Finally, the program displays the subject-wise averages and the overall average.

## How to Run the Program
1. Copy the provided C code into a `.c` file (e.g., `student_marks.c`).
2. Compile the program using a C compiler, such as GCC:
   ```sh
   gcc student_marks.c -o student_marks
   ```
3. Run the compiled program:
   ```sh
   ./student_marks
   ```
4. Follow the on-screen prompts to enter the marks for each subject.
5. View the calculated averages displayed at the end.

## Sample Input/Output
### Input:
```
Enter marks for Physics:
  Assignment: 75
  Course Work: 80
  Mid-term: 85
  End-term: 90
Enter marks for Chemistry:
  Assignment: 65
  Course Work: 70
  Mid-term: 75
  End-term: 80
Enter marks for Math:
  Assignment: 85
  Course Work: 90
  Mid-term: 95
  End-term: 100
```

### Output:
```
Average Marks:
Physics: 82.50
Chemistry: 72.50
Math: 92.50
Overall Average: 82.50
```

## Key Features
- Uses arrays to store marks for different assessments.
- Calculates and displays subject-wise averages.
- Computes the overall average of all subjects.
- Simple and interactive input system.

## Future Enhancements
- Add input validation to ensure marks are within a valid range (0-100).
- Allow multiple students' scores to be entered and compared.
- Store the results in a file for future reference.


