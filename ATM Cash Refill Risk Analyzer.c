#include <stdio.h>

int main() {
	int initalcash, n;
	int withdrawal;
	int riskCount = 0;
	
	scanf("%d",&initalcash);
	scanf("%d",&n);
	
	int balance = initalcash;
	for(int i = 0;i < n;i++)
	{
	    scanf("%d",&withdrawal);
	    balance -= withdrawal;
	    
	    if(balance < 5000)
	    {
	        riskCount++;
	    }
	}
    printf("Remaining Cash : %d\n",balance);
    printf("Risk Count : %d\n",riskCount);
    
    return 0;
}

