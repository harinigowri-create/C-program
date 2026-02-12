#include <stdio.h>

int main() {
	int num;
	scanf("%d",&num);
	
	if(num % 3 ==0 && num % 7 == 0) {
	    printf("Multiply of both 3 and 7");
	}
	
	else {
	    printf("not multiply of both 3 and 7");
	}
	return 0;
}	