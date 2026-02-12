#include <stdio.h>

int main() {
	char ch;
	scanf("%c",&ch);
	
	if((ch>=65 && ch<=90 || ch>=90 && ch<=122)) {
	    printf("Alphabet");
	}
	else if(ch>=48 && ch<=57) {
	    printf("Digit");
	}
	else {
	    printf("Special character");
	}
	return 0;
}	