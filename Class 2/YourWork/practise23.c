#include <stdio.h>
int main()
{
    for (int i = 1; i <= 20; i++) {
        if (i == 12) {
            break;
        
        }
        if (i % 2 !=0) {
            continue;
        }
        printf("%d", i);

    }
    printf("\n");
    return 0;
    
}