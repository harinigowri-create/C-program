#include <stdio.h>

int main() {
    int n, num, actualSum = 0;

    scanf("%d", &n);

    int expectedSum = n * (n + 1) / 2;

    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &num);
        actualSum += num;
    }

    int missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}