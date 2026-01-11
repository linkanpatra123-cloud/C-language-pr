#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    grade = (score >= 80) ? 'A' :
            (score >= 70) ? 'B' :
            (score >= 50) ? 'C' :
            (score >= 33) ? 'D' : 'F';

    printf("Your grade is %c. ", grade);

    switch (grade) {
        case 'A':
            printf("Excellent work! ");
            break;
        case 'B':
            printf("Well done. ");
            break;
        case 'C':
            printf("Good job. ");
            break;
        case 'D':
            printf("You passed, but you could do better. ");
            break;
        case 'F':
            printf("Sorry, you failed. ");
            break;
        default:
            printf("Invalid grade. ");
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}

// output

// Enter your score (0-100): 85
// Your grade is A. Excellent work! Congratulations! You are eligible for the next level.