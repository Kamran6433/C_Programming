#include <stdio.h>

// This algorithm has O(logn) time complexity becuase the search is halved after each iteration.
int binarySearch(int target, int array[], int n) {

    int low, mid, high;

    low = 0;
    high = n - 1;

    while (low <= high) {

        mid = (low + high) / 2;
        if (target < array[mid]) {
            high = mid - 1;
        }
        else if (target > array[mid]) {
            low = mid + 1;
        }
        else {
            return mid;
        }

    }

    return -1

}