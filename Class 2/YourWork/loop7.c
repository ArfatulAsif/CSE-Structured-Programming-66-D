#include <stdio.h>
int main(){
    int a;

    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        printf("you entered: %d\n", a);
    }
    return 0;
}