#include <stdio.h>

int main() {
    
    int N,price;
    int highest = 0;
    int highDays = 0;
  
    scanf("%d",&N);
    
    for(int i=0; i<N; i++) 
    {
        scanf("%d",&price);
        
        if(price > highest)
        {
            highest = price;
        }
        
        if(price > 100) 
        {
            highDays++;
        }
    }
    
       
    printf("Highest Price : %d\n", highest);
    printf("High Price Days : %d\n", highDays);
   
    return 0;

}

