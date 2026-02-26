#include <stdio.h>

int main() {
    int dataPackGB, N;
    scanf("%d", &dataPackGB);
    scanf("%d", &N);

    int i = 0;
    int usage;
    int exhaustedDay = -1;   
    int remainingData = dataPackGB;

    while (i < N) {
        scanf("%d", &usage);
        remainingData -= usage;

        if (remainingData <= 0 && exhaustedDay == -1) {
            exhaustedDay = i + 1; 
        }

        i++;
    }

    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        int overused = -remainingData; 
        if (overused < 0) overused = 0; 
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }

    return 0;
}