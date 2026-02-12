#include<stdio.h>
int main() {
    
    int choice;
    int a,b;
    
    scanf("%d",&choice);
    switch (choice) {
        
           case 1:
           scanf("%d %d",&a,&b);
           printf("Sum = %d",a+b);
           break;
           
           case 'E':
           scanf("%d %d",&a,&b);
           printf("Difference = %d",a-b);
           break;
           
           case 'I':
           scanf("%d %d",&a,&b);
           printf("Product = %d",a*b);
           break; 
           
           case 'O':
           scanf("%d %d",&a,&b);
           printf("Quotient = %d",a/b);
           break; 
           
           
           
        default:
           printf("Invalid choice");
    }

          return 0;
}