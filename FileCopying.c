#include <stdio.h>

int main(void) {

    int c;
    bool answer = getchar() != EOF;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

}