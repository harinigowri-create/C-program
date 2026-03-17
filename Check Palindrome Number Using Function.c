#include <stdio.h>
int ispalindrome(int n) {
    int original = n;
    int rev = 0;
    
    while (n!=0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    if(original == rev)
    return 1;
    else 
    return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    if(ispalindrome(n))
    printf("Palindrome");
    else 
    printf("Not Palindrome");
    
    return 0;
}