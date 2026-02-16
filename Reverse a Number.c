#include<stdio.h>
int main() {
    int a=1;
    int b=2;
    int c=3;
    printf("%d %d %d\n",a,b,c);
    
    int temp=a;
    a=c;
    b=b;
    c=temp;
    printf("%d %d %d",a,b,c);
    return 0;
}