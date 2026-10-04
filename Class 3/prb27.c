#include <stdio.h>
int main()
{
    int n, arr[100], max;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum = %d\n", max);
    return 0;
}