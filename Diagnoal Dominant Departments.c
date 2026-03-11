#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    int count = 0;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < R; i++) {
        int sum = 0;

        for(int j = 0; j < C; j++) {
            if(j != i) {
                sum += matrix[i][j];
            }
        }

        if(matrix[i][i] > sum) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}