#include <stdio.h>

int main() {
    int batterypercent,N;
    int drain,totalDrain = 0;
    
    scanf("%d",&batterypercent);
    scanf("%d",&N);
    
    for(int i=0; i<N; i++) {
        scanf("%d",&drain);
        totalDrain += drain;
    }
    
    batterypercent -= totalDrain;
    
    if(batterypercent < 0)
        batterypercent = 0;
       
    printf("Remaining Battery : %d%%",batterypercent);
   
    return 0;

}

