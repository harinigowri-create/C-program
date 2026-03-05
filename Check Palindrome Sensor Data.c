#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int readings[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &readings[i]);
    }

    int i = 0, j = n - 1;
    while(i < j) {
        if(readings[i] != readings[j]) {
            printf("No\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Yes\n");
    return 0;
}