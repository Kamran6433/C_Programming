// Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.

// Example
// "abcde" -> 0 # no characters repeats more than once
// "aabbcde" -> 2 # 'a' and 'b'
// "aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
// "indivisibility" -> 1 # 'i' occurs six times
// "Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
// "aA11" -> 2 # 'a' and '1'
// "ABBA" -> 2 # 'A' and 'B' each occur twice

#include <stddef.h>
#include <string.h>

size_t duplicate_count(const char *text) 
{
    int answer = 0; 
    int length = strlen(text);
    char *copy = '\0';
    strcpy(copy, text);
    tolower(copy);
    char *pointer = copy;

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length - 1; j++)
        {
            if (pointer[i] == copy[j])
            {
                answer++;
            }
        }
    }
    return answer;
}