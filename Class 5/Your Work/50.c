#include <stdio.h>
// string declare
int main()
{
    char course[] = "hRITWIKA";
    const char *university = "DUET";

    course[0] = 'H';
    printf("Updated Course : %s\n", course);
    university = "BUET";
    printf("New University : %s\n", university);
}