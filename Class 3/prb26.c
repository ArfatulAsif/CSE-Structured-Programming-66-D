#include <stdio.h>
int main ()
{
    int n, arr[100], sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("sum = %d\n", sum);
    return 0;
}