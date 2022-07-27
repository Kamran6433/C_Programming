// Your task is to sum the differences between consecutive pairs in the array in descending order.

// Example

// [2, 1, 10]  -->  9

// In descending order: [10, 2, 1]

// Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

#include <stddef.h>
#include <string.h>

int diffsum(const int *arr, size_t n)
{
    int *copy = 0;
    int answer = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    strcpy(copy, arr);
    if (length != 0 || length != 1) {
        for (int i = (length - 1); i > 0; i--) {
            int temp = arr[i] - arr[i - 1];
            answer += temp;
        }
    }
    return answer;
}

// Correct answer

int diffsum(const int *arr, size_t n) {
  if (n == 0)
    return 0;
  int min = arr[0], max = arr[0];
  for (size_t i = 0; i < n; i++) {
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  }
  return max - min;
}