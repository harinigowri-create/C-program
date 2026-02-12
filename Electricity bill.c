#include<stdio.h>
int main() {
    int units;
    float bill;
    scanf("%d",&units);
    
    if(units<=100){
        bill = units*5;
    } 
    else {
        bill = (100*5) + ((units-100) * 5);
    }
    printf("Bill amount = Rs.%.0f",bill);
    return 0;
}