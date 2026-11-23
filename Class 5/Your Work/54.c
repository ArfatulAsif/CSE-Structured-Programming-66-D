#include <stdio.h>

int main() {
    char firstName[30], lastName[30];
    char section;

    printf("Enter First Name and Last Name: ");
    scanf("%s %s", firstName, lastName); // Space separates two words

    // Leading space before %c is CRITICAL to consume the '\n' left by Enter
    printf("Enter Section (A/B/C): ");
    scanf(" %c", &section);

    printf("Student: %s %s | Section: %c\n", firstName, lastName, section);
    return 0;
}