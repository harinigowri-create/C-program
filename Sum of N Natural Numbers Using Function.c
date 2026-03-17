#include <stdio.h>
int sumofnatural(int n) {
    int sum = 0;
    
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    int result = sumofnatural(n);
    printf("%d",result);
    return 0;
}