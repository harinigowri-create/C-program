#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	
	int arr[n];
	int max,noisyCount = 0;
	
	for(int i = 0;i < n;i++) {
	    scanf("%d",&arr[i]);
	    	max = arr[0];
	}

	
	for(int i = 1;i < n;i++)
	{
	    if(arr[i] > max) {
	        max = arr[i];
	    }
	}
	
	for(int i = 0;i < n;i++)
	{
	    if(arr[i] > 70) {
	        noisyCount++;
	    }
	}
    
    printf("Maximum Noise : %d\n",max);
    printf("Noisy Periods : %d\n",noisyCount);
    
    return 0;
}