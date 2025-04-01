# Marks Calculator Program

## Overview
This program calculates the average marks of a student in three subjects: **Physics, Chemistry, and Math**. It takes input for four assessments in each subject and computes the average for each subject as well as the overall average across all subjects.

## Features
- Input validation to ensure marks are between **0 and 100**.
- Calculates and displays:
  - Average marks for **Physics, Chemistry, and Math**.
  - Overall average marks.
- Uses a function to handle input validation efficiently.

## Compilation and Execution
### Compilation
Use the following command to compile the program:
```sh
gcc marks_calculator.c -o marks_calculator
```

### Execution
Run the program using:
```sh
./marks_calculator
```

## How It Works
1. The user is prompted to enter marks for **four assessments** in **each subject**.
2. The program validates the input to ensure that the marks are within **0 to 100**.
3. It calculates the average marks for each subject and then the overall average.
4. The results are displayed in a structured format.

## Sample Output
```
Enter marks for Physics:
  Assignment: 80
  Course Work: 75
  Mid-term: 90
  End-term: 85

Enter marks for Chemistry:
  Assignment: 70
  Course Work: 65
  Mid-term: 80
  End-term: 75

Enter marks for Math:
  Assignment: 85
  Course Work: 90
  Mid-term: 95
  End-term: 88

Average Marks:
Physics: 82.50
Chemistry: 72.50
Math: 89.50
Overall Average: 81.50
```

## Code Structure
- `getValidMarks()`: Function to validate user input and ensure the marks are within the valid range.
- `main()`:
  - Prompts the user to enter marks for **Physics, Chemistry, and Math**.
  - Computes the average for each subject.
  - Computes the overall average.
  - Displays the results.

## Dependencies
- **C Compiler** (e.g., `gcc` for Linux/macOS, MinGW for Windows)
- Standard C libraries (`stdio.h`)

## Possible Enhancements
- Store student records in a file for future retrieval.
- Allow multiple students to input their marks.
- Implement a graphical user interface (GUI) for better user experience.

## Author
Created by **[Your Name]**

