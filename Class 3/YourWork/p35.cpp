#include <stdio.h>

int main() {
    int s, sum = 0;
    scanf("%d", &s);
    int matrix[s][s];

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("Diagonal sum = %d\n", sum);
    return 0;
}
