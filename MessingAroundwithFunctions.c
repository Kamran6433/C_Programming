#include <stdio.h>

int power(int a, int b);
int timesByItself(int a[]);
int dividingBy5();
int helloWorld();

int main(void) {

    int a, b, c, d;
    int numbers[5] = {1, 2, 3, 4, 5};
    // timesByItself(numbers);
    a = 4;
    d = 2;
    printf("Power function: %d", power(a, d));

}

/**
 * @brief 
 * This function takes two integers to perform a to the power of b
 * @param a is the base.
 * @param b is the power raised.
 * @return int 
 */
int power(int a, int b) {

    int i, power;
    for (i = 1; i <= b; ++i) {
        power = power * a;
    }

    return power;

}

int timesByItself(int a[]) {

    // Here im getting the length of the array using this operation.
    int size = sizeof a / sizeof *a;
    for (int i = 0; i < size; i++) {
        a[i] = a[i] * a[i];
    }
    


}