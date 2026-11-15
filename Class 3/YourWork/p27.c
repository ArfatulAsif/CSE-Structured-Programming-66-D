#include <stdio.h>
int main()
{
    int max, a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("%d", max);
}