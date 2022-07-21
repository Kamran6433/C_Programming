// Anything that has a '#' preceding it, is a macro.
// This is a macro.
#include <stdio.h>
// This is also a macro.
#define PI 3.141592653589793238
// This is a function that is also a macro.
#define SWAP(A, B) A ^= B ^= A ^= B
// NOTE: All of these are constants as the user isn't able to change the values of these constants(macros).
// In the example below I am using '#' to get the parameters replaced by the actual 
// arguments once this code runs.  
#define MULTIPLY(X, Y) printf(#X " * " #Y " is %d\n", X * Y)

int main(void) {

    printf("%0.8f\n", PI);
    // What is happening inside the code is that the preprocessor will convert the 
    // macro 'PI' will be replaced with the value i've given it which is 
    // 3.14159 so the code will look like this BEFORE compilation.
    // printf("%0.8f\n", 3.14159);

    int firstInt = 55;
    int secondInt = 74;
    printf("before SWAP is called -- firstInt: %d secondInt: %d\n", firstInt, secondInt);
    SWAP(firstInt, secondInt);
    printf("after SWAP is called -- firstInt: %d secondInt: %d\n", firstInt, secondInt);

    // Here i will show you why i used '#' in the value of the macro above.
    MULTIPLY(firstInt, secondInt);
    // Run this code and see the output of the final macro function MULTIPLY.

}