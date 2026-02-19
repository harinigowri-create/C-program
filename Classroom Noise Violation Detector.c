#include <stdio.h>

int main() {
    
	int n,i;
	int noise = 0;
	int violations = 0;
	int currentstreak = 0;
	int maxstreak = 0; 
	
	scanf("%d",&n);
	
	while(i < n) {
	    scanf("%d",&noise);
	    
	    if(noise > 70) {
	        violations++;
	        currentstreak++;
	        
	        if(currentstreak > maxstreak) {
	            maxstreak = currentstreak;
	        }
	    }
	    else {
	            currentstreak = 0;
	        }
	        i++;
	}
	
	printf("Noise Violaitons : %d\n",violations);
	printf("Longest Violations Streak : %d\n",maxstreak);
	
	return 0;
	
	
}

