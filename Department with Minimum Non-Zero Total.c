#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int minSum = 1000000;
    int index = -1;

    for (int i = 0; i < R; i++) {
        int sum = 0;

        for (int j = 0; j < C; j++) {
            sum += matrix[i][j];
        }

        if (sum != 0 && sum < minSum) {
            minSum = sum;
            index = i;
        }
    }

    printf("%d", index);

    return 0;
}