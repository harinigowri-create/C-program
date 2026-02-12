#include<stdio.h>
int main() {
    
    char i;
    
    
    int a,b;
    scanf("%d %c %d", &a, &i, &b);
    switch (i){
        
           case '+':
           printf("Result = %d",a+b);
           break;
           
           case '-':
           printf("Result = %d",a-b);
           break;
           
           case '*':
           printf("Result = %d",a*b);
           break; 
           
           case '/':
           printf("Result = %d",a/b);
           break;
           
        default:
           printf("enter invalid operator");
    }

          return 0;
}