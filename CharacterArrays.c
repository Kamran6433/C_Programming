#include <stdio.h>

#define MAXLINE 1000

int max; // Maximum length seen so far.
char line[MAXLINE]; // Current input line.
char longest[MAXLINE]; // Longest line saved here.

int getLine(void);
void copy(void);

// Prints the longest input line.
main() {

    int length; // Current line length.
    extern int max;
    extern char longest[];

    max = 0;
    while ((length = getLine()) > 0) {

        if (length > max) {
            max = length;
            copy();
        }

    }

    // If there was a line.
    if (max > 0) {
        printf("Longest: %s",longest);
        printf("Length of input: %d", strlen(longest));
    }

    return 0;

}

// getLine: read a line into s, return length.
int getLine(char s[], int lim) {

    int c, i;

    for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;

}

// copy: copy 'from' into 'to'; assuming to is big enough.
void copy(char to[], char from[]) {

    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }

}