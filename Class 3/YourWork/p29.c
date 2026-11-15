#include <stdio.h>
int main()
{

    int n, tar, f = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &tar);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == tar)
        {
            f = 1;
            printf("Found at index %d\n", i + 1);
            break;
        }
    }
    if (f == 0)
        printf("Not found\n");
}