#include <stdio.h>
#include <string.h>
int main() {
    char city[] = "Dhaka";
    printf("Length of '%s' = %d\n", city, sizeof(city));
    city[3] = '\0';//**********
    printf("After inserting '\\0' at index 3: '%s' (Length = %d)\n", city, strlen(city));
    char broken[4] = {'T', 'e', 's', 't'};
    printf("Valid char array size: %d bytes\n", strlen(broken));

}