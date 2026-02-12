#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a<b && b>c) {
	    printf("%d is largest",b);
	}
	
	else if(a>c && a>b) {
	    printf("%d is largest",a);
	}
	else {
	    printf("Invalid");
	}
	return 0;
}	