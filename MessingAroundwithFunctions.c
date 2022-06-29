#include <stdio.h>

int power(int a, int b);
int timesByItself(int a[]);
int dividingBy5();
int helloWorld();

int main(void) {

    int a, b, c, d;
    int numbers[] = {1, 2, 3, 4, 5};
    timesByItself(numbers);
    a = 2;
    d = 10;
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

    int i;
    int power = 1;
    for (i = 1; i <= b; ++i) {
        power = power * a;
    }

    return power;

}

int timesByItself(int a[]) {

    // Here im getting the length of the array using this operation.
    // I dont think the operation to get the size of the array works.
    int size = sizeof a / sizeof *a;
    for (int i = 0; i < 5; i++) {
        a[i] = a[i] * a[i];
        printf("%d\n", a[i]);
    }
    
    return a;

}