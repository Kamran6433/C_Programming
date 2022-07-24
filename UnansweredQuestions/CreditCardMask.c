#include <stdio.h>
#include <string.h>

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