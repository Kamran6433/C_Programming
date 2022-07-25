// Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending) {

    if (ending == "") {
        return true;
    }

    char *copyOfEnding2;
    char *copyOfEnding1;
    for (int i = strlen(string); i < ((strlen(string) + 1) && i > ((strlen(string) - 3)); i--) {
        copyOfEnding2 = string[i];
    }

    for (int i = strlen(string); i < ((strlen(string) + 1) && i > ((strlen(string) - 2)); i--) {
        copyOfEnding1 = string[i];
    }

    if (copyOfEnding2 == ending || copyOfEnding1 == ending) {
        return true;
    }

    return false;

}