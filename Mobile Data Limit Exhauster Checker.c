#include <stdio.h>

int main() {
    
	int totaldata, days, i = 0;
	int usage;
	int daysused = 0;
	
	scanf("%d",&totaldata);
	scanf("%d",&days);
	
	while(i < days && totaldata > 0)
	{
	    scanf("%d",&usage);
	    
	    if(totaldata >= usage) 
	    {
	        totaldata -= usage;
	        daysused++;
	    } else {
	        totaldata = 0;
	        break;
	    }
	    i++;
	}
	
	printf("Days Used: %d\n",daysused);
	printf("Remaining Data : %dGB\n",totaldata);
	         
	return 0;

}
