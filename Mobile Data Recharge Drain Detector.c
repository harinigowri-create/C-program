#include <stdio.h>

int main() {
    int totalData, N;
    int usage;
    int remainingData;
    int successfulDays = 0;
    
    scanf("%d",&totalData);
    scanf("%d",&N);
    
    remainingData = totalData;
    
    for(int i = 0;i < N;i++)
    {
        scanf("%d",&usage);
        
        if(usage <= remainingData) {
            remainingData -= usage;
            successfulDays++;
        }
        else {
            break;
        }
    }

    
    printf("Remaining Data : %d\n",remainingData);
    printf("Successful Days : %d\n",successfulDays);
    
    return 0;
}