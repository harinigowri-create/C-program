#include <stdio.h>

int main() {
    int N, risk;
    int totalRisk = 0, highRisk = 0;
    
    scanf("%d",&N);
    
   
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&risk);
        totalRisk += risk;
        
        if(risk > 50) {
            highRisk++;
        }
        
    }

    
    printf("Total Risk : %d\n",totalRisk);
    printf("High Risk Sessions : %d\n",highRisk);
    
    return 0;
}