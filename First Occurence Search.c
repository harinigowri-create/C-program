#include <stdio.h>

int main() {
    char str[200], ch;
    int i, pos = -1;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            pos = i;
            break;
        }
    }

    printf("%d", pos);

    return 0;
}