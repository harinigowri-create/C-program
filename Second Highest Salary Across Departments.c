#include <stdio.h>
#include <limits.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int salary[R][C];
    
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);
        }
    }

    int highest = INT_MIN;
    int secondHighest = INT_MIN;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            int current = salary[i][j];

            if(current > highest) {
                secondHighest = highest;
                highest = current;
            }
            else if(current > secondHighest && current < highest) {
                secondHighest = current;
            }
        }
    }

    printf("%d\n", secondHighest);

    return 0;
}