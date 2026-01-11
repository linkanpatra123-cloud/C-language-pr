#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' :
            (score >= 70) ? 'B' :
            (score >= 50) ? 'C' :
            (score >= 33) ? 'D' : 'F';

    printf("Your grade is %c. ", grade);

    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("You passed, but you could do better\n");
            break;
        case 'F':
            printf("Sorry, you failed\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}

// output

// Enter your score (0-100): 92
// Your grade is A. Excellent work!