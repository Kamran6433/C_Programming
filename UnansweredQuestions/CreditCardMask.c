#include <stdio.h>
#include <string.h>

// Usually when you buy something, you're asked whether your credit card number, phone number or answer to your most secret question is still correct. However, since someone could look over your shoulder, you don't want that shown on your screen. Instead, we mask it.

// Your task is to write a function maskify, which changes all but the last four characters into '#'.

char *maskify (char *masked, const char *string) {

    int length = strlen(string);

	*masked = '\0'; // write to masked
    strcpy(masked, string);

    if (length > 3) {
        for (int j = 0; j < (length - 4); j++) {
            masked[j] = '#';
        }
    }
    

	return masked; // return it
}