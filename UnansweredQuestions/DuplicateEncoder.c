// The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.

char *DuplicateEncoder(char *arr)
{
    int count = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (arr[i] == arr[j]) {
                arr[i] = ")";
            }
        }
    }

    for (int k = 0; k < count; k++) {
        if (arr[k] != ")") {
            arr[k] = "(";
        }
    }
    return arr;
}