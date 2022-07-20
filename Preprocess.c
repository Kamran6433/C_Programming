// In C, the code is processed before it is compiled and anything that has '#' in 
// front of it will be preprocessed. It allows the ability to include macro expansions,
// conditional compilation and line control. Usually the # would be a the top of 
// the code. 

#include <stdio.h>
#define MIN(A, B) (A < B ? A : B) 

int main(void) {

    printf("%d\n", MIN(21, 888));

}