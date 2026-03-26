#include<stdio.h>
int main() {
    char str[101];
    char *ptr = str;
    int count = 0;
    fgets(str,sizeof(str),stdin);
    while(*ptr != '\0') {
        char ch =*ptr;
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
               count++;
           }
           ptr++;
    }
    printf("%d",count);
    return 0;
} 