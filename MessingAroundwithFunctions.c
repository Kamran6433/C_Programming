#include <stdio.h>

int power(int a, int b);
int timesByItself(int a[]);
int dividingBy5();
int helloWorld();

int main(void) {

    int numbers[5] = {1, 2, 3, 4, 5};

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

    for (int i = 0; i < sizeof(a); i++) {
        a[i] = a[i] * a[i];
    }
    

}