#include <stdio.h>

int main() {
	int n,delay;
	int totalDelay;
	int delayedCount = 0;
	
	scanf("%d",&n);
	
	for(int i = 0;i < n;i++)
	{
	    scanf("%d",&delay);
	    totalDelay += delay;
	    
	    if(delay > 30)
	    {
	        delayedCount++;
	    }
	}
    printf("Total Delay : %d\n",totalDelay);
    printf("Delayed Deliveries  : %d\n",delayedCount);
    
    return 0;
}

