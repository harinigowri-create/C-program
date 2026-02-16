#include<stdio.h>
int main() {
    int a,b;
    int sum=0;
    int i;
    scanf("%d %d",&a,&b);
    
    
    for(int i=a;i<=b;i=i+a) {
       sum = sum + i;
    }    
    printf("%d",sum);
    
    return 0;
}