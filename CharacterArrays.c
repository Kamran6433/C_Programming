#include <stdio.h>

#define MAXLINE 1000

int max; // Maximum length seen so far.
char line[MAXLINE]; // Current input line.
char longest[MAXLINE]; // Longest line saved here.

int getLine(void);
void copy(void);
int *findMid(int a[], int n);

// Prints the longest input line.
main() {

    int a[] = {1, 2, 3, 4, 5};
    // This is how to get the number of elements in the array.
    int lengthOfArray = sizeof(a)/sizeof(a[0]); 
    // The address which is returned by the function findMid will be stored in mid.
    int *mid = findMid(a, lengthOfArray);
    printf("Value of mid or the value of the function: %d", *mid);

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
    }

    return 0;

}

// Random funtion to undertsand returning pointers from a function.
int *findMid(int a[], int n) {

    return &a[n/2];

}

// getLine: read a line into s, return length.
int getLine(void) {

    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i++] = c;
    }

    line[i] = '\0';
    return i;

}

// copy: copy 'from' into 'to'; assuming to is big enough.
void copy(void) {

    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0') {
        ++i; 
    }

}