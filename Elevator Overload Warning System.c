#include <stdio.h>

int main() {
    int maxWeight, N;

    scanf("%d", &maxWeight);
    scanf("%d", &N);

    int i = 0;
    int weight;
    int totalWeight = 0;
    int passengersAllowed = 0;
    int overload = 0;

    while (i < N) {
        scanf("%d", &weight);

        if (totalWeight + weight <= maxWeight) {
            totalWeight += weight;
            passengersAllowed++;
        } else {
            overload = 1;
            break;   
        }

        i++;
    }

    printf("Passengers Allowed: %d\n", passengersAllowed);

    if (overload == 1) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }

    return 0;
}