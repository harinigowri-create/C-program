#include <stdio.h>

int main() {
    int n,original,reverse = 0,remainder;
    
    scanf("%d",&n);
    original = n;
    
    
    for(;n!=0;n = n/10) {
        remainder = n%10;
        reverse = reverse * 10 + remainder;
    }
    if(original == reverse)
       printf("yes");
    else 
       printf("No");
    
    return 0;

}

