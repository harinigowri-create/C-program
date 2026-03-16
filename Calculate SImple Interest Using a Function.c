#include<stdio.h>

float calculateSI(int p, int r, int t) {
    
    float si;
    si = (p * r * t) / 100.0;
    return si;
}

int main() {
    
    int P,R,T;
    float result;
    scanf("%d %d %d",&P,&R,&T);
    
    result = calculateSI(P,R,T);
    printf("%.2f",result);
    
    return 0;
}