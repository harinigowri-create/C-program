#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    int count = 0;
    
    for(;n != 0; n= n/10) {
        count++;
    }
    printf("%d \n",count);
    
    return 0;
}