#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {

            for(int x = i; x < R; x++) {
                for(int y = (x == i ? j + 1 : 0); y < C; y++) {

                    if(a[i][j] == a[x][y]) {
                        printf("%d", a[i][j]);
                        return 0;
                    }

                }
            }

        }
    }

    return 0;
}