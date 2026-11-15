#include <stdio.h>
int main()
{
    int max, a[5], ecounter = 0, ocounter = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            ecounter = ecounter + 1;
        else
            ocounter = ocounter + 1;
    }
    printf("Even count = %d, Odd count = %d\n", ecounter, ocounter);
    return 0;
}