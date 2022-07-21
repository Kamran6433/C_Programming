// Anything that has a '#' preceding it, is a macro.
// This is a macro.
#include <stdio.h>
// This is also a macro.
#define PI 3.14159
// This is a function that is also a macro.
#define SWAP(A, B) A ^= B ^= A ^= B
// NOTE: All of these are constants as the user isn't able to change the values of these constants(macros).
// In the example below I am using '#' to get the parameters replaced by the actual 
// arguments once this code runs.  
#define MULTIPLY(X, Y) printf(#X "*" #Y "is %d\n", X * Y)
