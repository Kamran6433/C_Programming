// Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending) {

    if (strlen(ending) == 0) {
        return true;
    }
  
    if (strlen(string) < strlen(ending)) {
        return false;
    }

    char *copyOfEnding2;
    char *copyOfEnding1;
    for (int i = strlen(string); i < ((strlen(string) + 1)) && i > ((strlen(string) - 2)); i--) {
        copyOfEnding2 += string[i];
    }

    for (int i = strlen(string); i < ((strlen(string) + 1)) && i > ((strlen(string) - 1)); i--) {
        copyOfEnding1 = string[i];
    }

    if (copyOfEnding2 == ending || copyOfEnding1 == ending) {
        return true;
    }
  
    if (strlen(string) == strlen(ending) && string == ending) {
        return true;
    } 

    return false;

}

// Correct answer.

bool solution(const char *string, const char *ending)
{
    int slen = strlen(string);
    int elen = strlen(ending);
    
  
    if (slen < elen) return false;
    
  
    int y = 0;
    for(int x = slen - elen; x <= slen; ++x)
    {
        if(string[x] != ending[y])
        {
          return false;
        }
        ++y;
    }
    return true;
}