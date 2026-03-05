#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int orders[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &orders[i]);
    }

    int pos = 0; 

    for(int i = 0; i < n; i++) {
        if(orders[i] != 0) {
            orders[pos++] = orders[i];
        }
    }

    for(int i = pos; i < n; i++) {
        orders[i] = 0;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", orders[i]);
    }
    printf("\n");

    return 0;
}