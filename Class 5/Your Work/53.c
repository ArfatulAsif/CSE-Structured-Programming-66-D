#include<stdio.h>
int main()
{
    char user[30];
    printf("Enter user (no spaces): ");
    scanf("%29s", user);
    printf("Welcome, %s!\n", user);

    return 0;

    
}