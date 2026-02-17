#include <stdio.h>

int main() {
    
    int n,i;
    int voltage;
    int min;
    int lowCount = 0;
  
    scanf("%d",&n);
    scanf("%d",&min);
    
    if(min < 210) {
        lowCount++;
    }
    
    for(i=1; i<n; i++) 
    {
        scanf("%d",&voltage);
        
        if(voltage < min) {
            min = voltage;
    }
    
        if(voltage < min) {
            lowCount++;
        }
    }
  
    printf("Minimum voltage : %d\n", min);
    printf("Low Voltage Events : %d\n", lowCount);
   
    return 0;

}
