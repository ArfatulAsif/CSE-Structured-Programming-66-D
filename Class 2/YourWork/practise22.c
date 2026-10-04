#include <stdio.h>
int main()
{
    int a, sum = 0;

    for (int i = 1; i <= 5; i++) {
        scanf("%d", &a);
        if (a < 0) {
            continue;
        }
        sum = sum + a;
    }
    printf("Sun of positive numbers=%d\n", sum);
    return 0;
}