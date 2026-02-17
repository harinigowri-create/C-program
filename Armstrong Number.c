#include <stdio.h>
#include<math.h>

int main() {
    int n,original,remainder,digits = 0;
    int sum=0;
    
    scanf("%d",&n);
    
    original = n;
    
    
    for(int temp = n;temp!=0;temp = temp/10) {
        digits++;
    }
    for(int temp = n;temp!=0;temp = temp/10) {
        remainder = temp%10;
        sum+=pow(remainder,digits);
    }
    if(sum == original) 
        printf("Yes");
    else 
        printf("No");
   
    
    return 0;

}

