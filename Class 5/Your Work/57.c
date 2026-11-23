#include <stdio.h>

int main() {
    char s1[] = "Rahim";
    char s2[] = "Christopher";
    int dynamicWidth = 12;

    printf("--- Table Alignment (Width = 15) ---\n");
    printf("|%5s|%5s|\n", s1, s2);   // Right-aligned
    printf("|%-5s|%-5s|\n", s1, s2); // Left-aligned

    printf("\n--- String Truncation (%.5s) ---\n");
    printf("Shortened Name: %.5s\n", s2); // Output: Chris

    printf("\n--- Combined Left-Align & Truncate (%-10.6s) ---\n");
    printf("|%-10.6s| -> padded to 10 spaces, clipped to 6 chars\n", s2);


    return 0;
}