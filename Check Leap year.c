#include <stdio.h>

int main() {
	int leap_year;
	scanf("%d %d",&leap_year);
	
	if(leap_year % 4 == 0 && leap_year % 100 != 0 || leap_year % 400 == 0 ) {
	    printf("leap_year");
	}
	else{
	    printf("not a leap_year");
	}
	return 0;
}