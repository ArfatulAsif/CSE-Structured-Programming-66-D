#include <stdio.h>

int calculateTotal(int quiz, int midterm, int finalexam) {
    return quiz + midterm + finalexam;

}

double calculatepercentage(int totalMarks, int maxMarks) {
    return ((double)totalMarks / maxMarks) * 100.0;
}

char assignGrade(double percentage) {
    if (percentage >= 80.0) return 'A';
    if (percentage >= 65.0) return 'B';
    if (percentage >= 50.0) return 'C';
    return 'F';
}

int main() {
    int quiz, mid, finalexam;
    scanf("%d %d %d", &quiz, &mid, &finalexam);

    int total = calculateTotal(quiz, mid, finalexam);
    double pct = calculatepercentage(total, 100);
    char grade = assignGrade(pct);

    printf("Total: %d/100 | Percentage: %.2lf%% | Grade: %c\n", total, pct, grade);
    return 0;
}