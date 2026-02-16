#include<stdio.h>
int main() {
    int N,P;
    int result=1;
    int i;
    scanf("%d %d",&N,&P);
    
    int sum;
    for(int i=1;i<=P;i++) {
       result = result * N;
    }    
    printf("%d",result);
    
    return 0;
}