#include <stdio.h>

int main() {
    int binary,decimal = 0,base = 1, rem;
    scanf("%d",&binary);
    for(;binary>0;binary=binary/10) { 
        
        rem=binary % 10;
        decimal = decimal + rem * base;
        base =  base * 2;
    }
    printf("%d",decimal);
    return 0;

}

