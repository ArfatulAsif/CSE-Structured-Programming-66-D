#include <stdio.h>

int main() {
    char username[30];

    printf("Enter username (no spaces): ");
    scanf("%29s", username); // %29s prevents buffer overflow for a 30-char array

    printf("Welcome, %s!\n", username);
    return 0;
}