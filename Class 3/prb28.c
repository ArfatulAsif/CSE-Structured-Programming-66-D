#include <stdio.h>

int main() {
    int n, arr[100];
    int evenCount = 0, oddCount = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            evenCount++;

        } else {
            oddCount++;
            
        }
    }

    printf("Even count = %d, Odd count = %d\n", evenCount, oddCount);
    return 0;
}
