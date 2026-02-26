#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int order;
    int successful = 0;
    int cancelled = 0;
    while (i < N) {
        scanf("%d", &order);

        if (order == 1) {
            successful++;
        } else if (order == 0) {
            cancelled++;
        }

        i++;
    }

    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);

    if (cancelled > successful) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }

    return 0;
}