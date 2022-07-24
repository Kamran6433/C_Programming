#include <stdio.h>

char *maskify (char *masked, const char *string) {

    int length = strlen(string);

	*masked = '\0'; // write to masked
    for (int i = 0; i < length; i++) {
        masked[i] = string[i];
    }

    for (int j = 0; j < (length - 4); j++) {
        masked[j] = '#';
    }
    

	return masked; // return it
}