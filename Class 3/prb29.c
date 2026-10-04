#include <stdio.h>

int main() {
    int n, arr[100], target, found = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            printf("Found at index %d\n", i);
            break;
        }
    }

    if (found == 0) {
        printf("Not found\n");
    }

    return 0;
}
