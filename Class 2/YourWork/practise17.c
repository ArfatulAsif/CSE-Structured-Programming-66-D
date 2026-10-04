#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d", i);
        }
        i++;

    }
printf("\n");
return 0;

}
