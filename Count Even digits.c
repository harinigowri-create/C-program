#include<stdio.h>
int main() {
    int n;
    int count=0;
    int digit;
    scanf("%d",&n);
    
    
    for(;n>0;n=n/10) {
       digit = n % 10;
       if(digit % 2 == 0){
           count++;
       }
    }    
    printf("%d",count);
    
    return 0;
}