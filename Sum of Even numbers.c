#include <stdio.h>
int main() {
    int a;
    int sum;
    scanf("%d",&a);
    for(int i=2;i<=10;i+=2) {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
    
}

