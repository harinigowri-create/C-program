#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;

    scanf("%d", &n);
    int days[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &days[i]);
    }

    for(int i = 0; i < n; i++) {
        if(days[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even:%d Odd:%d", even, odd);

    return 0;
}