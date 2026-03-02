#include<stdio.h>
int main() {
    int rows = 4;
    int i,j;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d",j);
        }
        for(j = 1; j <= (rows - i) * 2; j++) {
            printf(" ");
        }
        for(j = i; j >= 1; j--) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
