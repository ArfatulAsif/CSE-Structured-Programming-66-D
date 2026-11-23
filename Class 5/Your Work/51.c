#include<stdio.h>
#include<string.h>
int main()
{
    char city[20]="Dhaka";
    printf("%lu\n", strlen(city));
    city[3]='\0';
    printf("%s len = %lu\n", city, strlen(city));
    char broken[4]={'T', 'e', 's', 't'};
    printf("%lu\n", sizeof(broken));

    return 0;
}