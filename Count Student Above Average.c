#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int marks[n];
    int total = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    double average = (double)total / n;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(marks[i] > average) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}