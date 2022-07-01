#include <stdio.h>

int strlen(char s[]);

int main(void) {

    char s[] = {"Hello Worlds!"}; 
    printf("%d", strlen(s));
    // This prints 13 as the length of s.

}

int strlen(char s[]) {

    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;

}