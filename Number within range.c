#include <stdio.h>

int main() {
	int num;
	scanf("%d",&num);
	
	if(num<=20 && num>=10) {
	    printf("Number is within range");
	}
	else {
	    printf("Number is not within range");
	}
	return 0;
}	