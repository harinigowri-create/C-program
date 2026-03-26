#include<stdio.h>
int main() {
    char source[101],destination[101];
    char *src = source;
    char *dest = destination;
    fgets(source,sizeof(source),stdin);
    while(*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    printf("%s",destination);
    return 0;
} 