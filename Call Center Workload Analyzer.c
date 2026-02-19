#include <stdio.h>

int main() {
	int N, calls;
	int totalcalls = 0, overloadedhours =0;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
	    scanf("%d", &calls);
	    totalcalls += calls;
	    
	    if(calls > 40) 
	    {
	        overloadedhours++;
	    }
	}
	printf("Total Calls : %d\n",totalcalls);
	printf("Over Loaded Hours : %d\n",overloadedhours);
	
	return 0;

}

