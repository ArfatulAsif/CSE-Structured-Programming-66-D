#include <stdio.h>

int main() {
    int n, arr1[100], arr2[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Array 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
