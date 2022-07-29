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
    char *temp;
    int length = strlen(text);
    char copy[length];
    strcpy(copy, text);
    char *pointer = copy;
    for(int i = 0; i < length; i++) copy[i] = tolower(copy[i]);

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (pointer[i] == copy[j] && temp != copy[j])
            {
                answer++;
                temp = copy[j];
            }
        }
    }
    return answer;
}

// Very close to the answer.

// Here is someone elses answer that I have studied.
int is_same(const char *c, const char *d) { 
    return tolower(*c) == tolower(*d);
}
size_t duplicate_count(const char *text) {
    const char *needle = "abcdefghijklmnopqrstuvwxyz0123456789";
    const char *hay = text;
    int count = 0; 
    do { 
        // is there one occurrence?
        do if (is_same(hay, needle))
            break;
        while (*hay && hay++);
        // does it occur at least once more?
        do if (is_same(hay+1, needle))
            break;
        while(*hay && hay++);
        if (*hay)
            count++;
        hay = text;
    } while (*needle++);
    return count;     
}