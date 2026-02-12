#include <stdio.h>

int main() {
	int mark;
	scanf("%d",&mark);
	
	if(mark>=75 && mark<=90) {
	    printf("Grade B");
	}
	else {
	    printf("Fail");
	}
	return 0;
}	