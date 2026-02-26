#include <stdio.h>

int main() {
    int maxWeight, N;
    scanf("%d", &maxWeight);
    scanf("%d", &N);

    int i = 0;
    int weight;
    int totalWeight = 0;
    int peopleEntered = 0;
    int overload = 0;

    while (i < N) {
        scanf("%d", &weight);

        if (totalWeight + weight <= maxWeight) {
            totalWeight += weight;
            peopleEntered++;
        } else {
            overload = 1;  
            break;          
        }

        i++;
    }

    printf("People Entered: %d\n", peopleEntered);

    if (overload) {
        printf("Overload Status: Yes\n");
    } else {
        printf("Overload Status: No\n");
    }

    return 0;
}