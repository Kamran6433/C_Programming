#include <stdio.h>

// This here declares all the functions before I initialise them.
int power(int a, int b);
int timesByItself(int a[]);
float dividingBy5(float a[]);
int helloWorld(void);

int main(void) {

    helloWorld();
    int a, b, c, d;
    int numbers[] = {1, 2, 3, 4, 5};
    timesByItself(numbers);
    float floatingNumbers[] = {5.0, 10.0, 15.0, 20.0};
    dividingBy5(floatingNumbers);
    a = 2;
    d = 10;
    printf("Power function: %d", power(a, d));

}

/**
 * @brief 
 * This function takes two integers to perform a to the power of b.
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

/**
 * @brief 
 * This function takes an array and multiplies every number in the array 
 * by itself so squaring each element in the given array.
 * @param a is the array argument passed into this function.
 * @return int 
 */
int timesByItself(int a[]) {

    // Here im getting the length of the array using this operation.
    // I dont think the operation to get the size of the array works.
    // int size = sizeof a / sizeof *a;
    for (int i = 0; i < 5; i++) {
        a[i] = a[i] * a[i];
        printf("Int: %d\n", a[i]);
    }
    
    return 0;

}

/**
 * @brief 
 * This function takes an array and divides every number in the array by 5.
 * @param a is the array argument passed into this function. 
 * @return float 
 */
float dividingBy5(float a[]) {

    // Here im getting the length of the array using this operation.
    // I dont think the operation to get the size of the array works.
    // int size = sizeof a / sizeof *a;
    for (int i = 0; i < 4; i++) {
        a[i] = a[i] / 5.0;
        printf("Float: %f\n", a[i]);
    }
    
    return 0;

}

/**
 * @brief 
 * This function prints Hello World.
 * @return int 
 */
int helloWorld(void) {

    printf("Hello World!\n");

    return 0;

}