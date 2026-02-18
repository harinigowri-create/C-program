#include <stdio.h>

int main() {
	int n,hours;
	int totalHours = 0;
	int heavyDays = 0;
	int cost;
	
	scanf("%d",&n);
	
	for(int i = 0;i < n;i++)
	{
	    scanf("%d",&hours);
	    totalHours += hours;
	    
	    if(hours > 4)
	    {
	        heavyDays++;
	    }
	}
	cost = totalHours * 200;
	
	
    printf("Total Overtime Hours : %d\n",totalHours);
    printf("Overtime Cost : %d\n",cost);
    printf("Heavy Overtime Days : %d",heavyDays);
    
    return 0;
}

