#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, remainder, result = 0, count = 0;
    
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, count);
        temp /= 10;
    }
    if (result == original)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (isArmstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");
    
    return 0;
}