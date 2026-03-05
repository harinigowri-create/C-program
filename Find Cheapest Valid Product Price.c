#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int prices[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int min_price = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(prices[i] > 0 && prices[i] < min_price) {
            min_price = prices[i];
        }
    }

    if(min_price == INT_MAX) {
        printf("No positive\n");
    } else {
        printf("%d\n", min_price);
    }

    return 0;
}