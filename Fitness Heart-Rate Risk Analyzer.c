#include <stdio.h>

int main() {
	int N, rate;
	int maxrate = 0, dangercount =0;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
	    scanf("%d", &rate);
	    
	    if(rate > maxrate) 
	    {
	        maxrate = rate;
	    }
	    if(rate > 140)
	    {
	        dangercount++;
	    }
	}
	
	printf("Max Heart Rate : %d\n",maxrate);
	printf("Danger Readings : %d\n",dangercount);
	
	return 0;

}

