#include <stdio.h>

int main()
{
    char fullName[50];
    char alphaOnly[50];
    printf("Enter Full Name: ");
    scanf(" %[^\n]", fullName);

    printf("Enter City Name (stops at digits): ");
    scanf(" %[A-Za-z ]", alphaOnly);

    printf("Full Name : %s\n", fullName);
    printf("City Name : %s\n", alphaOnly);

    return 0;
}