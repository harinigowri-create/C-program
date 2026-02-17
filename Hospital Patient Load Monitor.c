#include <stdio.h>

int main() {
    
    int N,i;
    int patients;
    int totalpatients = 0;
    int overcrowdedDays = 0;
  
    scanf("%d",&N);
    
    for(int i=0; i<N; i++) 
    {
        scanf("%d",&patients);
        totalpatients += patients;
        
        if(patients > 100) 
        {
            overcrowdedDays++;
        }
    }
    
       
    printf("Total Patients : %d\n", totalpatients);
    printf("Over Crowded Days : %d\n", overcrowdedDays);
   
    return 0;

}

