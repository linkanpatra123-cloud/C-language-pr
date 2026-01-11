#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    printf("Your grade is %c\n", grade);

    return 0;
}

// output

// Enter your score (0-100): 92
// Your grade is A