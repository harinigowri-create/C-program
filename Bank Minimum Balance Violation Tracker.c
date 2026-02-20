#include <stdio.h>

int main() {
	int N,i = 0;
	int balance, transcation;
	int lowbalancedays = 0;
	
	scanf("%d",&N);
	scanf("%d",&balance);
	
	while(i < N)
	{
	    scanf("%d",&transcation);
	    balance += transcation;
	    
	    if(balance < 2000) 
	    {
	        lowbalancedays++;
	    }
	    i++;
	}
	
	printf("Final Balance : %d\n",balance);
	printf("Low Balance Days : %d\n",lowbalancedays);
	         
	return 0;

}
