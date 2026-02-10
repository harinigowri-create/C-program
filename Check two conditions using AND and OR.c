#include<stdio.h>
int main() {
    
    int a=5,b=10;
    printf("%d",a && b && a||b);
    
    int c=0,d=5;
    printf("\n%d",c && d && c||d);
    
    int e=0,f=0;
    printf("\n%d",e && f && e||f);
    
    return 0;
}