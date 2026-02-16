#include<stdio.h>
int main() {
    
    int n,i;
    scanf("%d",&n);
    int sum=0;
    
    
    for(int temp=n;temp>0;temp=temp/10) {
       int digit=temp%10;
       int fact=1;
    for(int i = 1;i <= digit;i++) {
        fact=fact * i;
    }
    sum=sum + fact;
    }
    if(sum==n) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}