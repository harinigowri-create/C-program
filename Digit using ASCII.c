#include<stdio.h>
int main() {
    
    int num;
    scanf("%d",&num);
    
    if(num <= 48 && num <= 57) {
        printf("Digit");
    } 
    
    else {
        printf("Not a digit");
    }

    return 0;
}