#include <stdio.h>

#define IN  1
#define OUT 0

// This program will encounter bugs and errors when special characters
// are inputted.

int main(void) {

    int c, newLine, newWord, newCount, state;

    state = OUT;
    newLine = newCount = newWord = 0;

    while ((c = getchar()) != EOF) {
        
            ++newCount;
            if (c == '\n') {
                ++newLine;
            }
            if (c == ' ' || c == '\n' || c == '\t') {
                state = OUT;
            }
            else if (state == OUT) {
                state = IN;
                ++newWord;
            }

    }
    printf("Lines:%d Words:%d %d", newLine, newWord, newCount);

}