#include <stdio.h>

int main() {
    
    int n,i;
    int revenue;
    int total = 0;
    int targetDays = 0;
  
    scanf("%d",&n);
    
    for(int i=0; i<n; i++) 
    {
        scanf("%d",&revenue);
        total += revenue;
        
        if(revenue > 50000) {
            targetDays++;
        }
    }   
    printf("Total Revenue : %d\n", total);
    printf("Target Days : %d\n", targetDays);
   
    return 0;

}

