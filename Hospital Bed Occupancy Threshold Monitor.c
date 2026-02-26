#include <stdio.h>

int main() {
    int capacity, N;

    scanf("%d", &capacity);
    scanf("%d", &N);

    int i = 0;
    int change;
    int occupied = 0;
    int criticalHours = 0;

    while (i < N) {
        scanf("%d", &change);

        occupied += change;
        if (occupied > 0.9 * capacity) {
            criticalHours++;
        }

        i++;
    }

    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalHours);

    return 0;
}