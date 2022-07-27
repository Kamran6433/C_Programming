// Your task is to sum the differences between consecutive pairs in the array in descending order.

// Example

// [2, 1, 10]  -->  9

// In descending order: [10, 2, 1]

// Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

#include <stddef.h>
#include <string.h>

int diffsum(const int *arr, size_t n)
{
    int *copy;
    int answer = 0;
    strcpy(copy, arr);
    if (n != 0 || n != 1) {
        for (int i = (n - 1); i > 0; i--) {
            int temp = arr[i] - arr[i - 1];
            answer += temp;
        }
    }
    return answer;
}