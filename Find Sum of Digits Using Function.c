#include<stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    
    while (n > 0) {
        sum += n % 10;
        n = n/10;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    int result = sumOfDigits(n);
    printf("%d",result);
    return 0;
}