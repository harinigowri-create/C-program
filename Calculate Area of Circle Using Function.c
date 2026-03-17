#include<stdio.h>

float calculateArea(int r) {
    return 3.14 * r * r;
}
int main() {
    int r;
    scanf("%d",&r);
    float area = calculateArea(r);
    printf("%.2f",area);
    return 0;
}