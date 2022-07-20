// In C, the code is processed before it is compiled and anything that has '#' in 
// front of it will be preprocessed. It allows the ability to include macro expansions,
// conditional compilation and line control. Usually the # would be a the top of 
// the code. 

#include <stdio.h>
#define MIN(A, B) (A < B ? A : B) 

int main(void) {

    // This prints out 21 because 21 is the smallest and 
    // the value thats returned by the function MIN.
    // The preprocessor saw this function MIN before the compiler did.
    // The preprocessor replaced line 15 to printf("&d\n", (21 < 888 ? 21 : 888));
    printf("%d\n", MIN(21, 888));

}