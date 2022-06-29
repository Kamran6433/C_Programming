#include <stdio.h>

int power(int a, int b);
int timesByItself();
int dividingBy5();
int helloWorld();

int main(void) {



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