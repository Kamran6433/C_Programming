// Bob is bored during his physics lessons so he's built himself a toy box to help pass the time. The box is special because it has the ability to change gravity.

// There are some columns of toy cubes in the box arranged in a line. The i-th column contains a_i cubes. At first, the gravity in the box is pulling the cubes downwards. When Bob switches the gravity, it begins to pull all the cubes to a certain side of the box, d, which can be either 'L' or 'R' (left or right). Below is an example of what a box of cubes might look like before and after switching gravity.

// Given the initial configuration of the cubes in the box, find out how many cubes are in each of the n columns after Bob switches the gravity.

#include <stddef.h>

void flip(char d, int *array, size_t n, int *result) {

    if (d == 'L') {
        // I will be using a bubble sort to compare two elements to see which one is larger in order to swap them and put them in an ascending order.
        for (int i = 0; i < n; i++) {
            for (int j = i; j < (n); j++) {
                if (array[i] < array[j]) {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
          result[i] = array[i];
        }
    }

    if (d == 'R') {
        // I will be using a bubble sort to compare two elements to see which one is larger in order to swap them and put them in an descending order.
        for (int i = 0; i < n; i++) {
            for (int j = i; j < (n); j++) {
                if (array[i] > array[j]) {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
          result[i] = array[i];
        }
    }
 
}