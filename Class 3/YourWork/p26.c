#include <stdio.h>
int main()
{
    int ar[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
    }
    printf("%d", sum);
}