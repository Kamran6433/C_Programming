#include <stdio.h>

main() {

    // Here expression 1 and expression 3 are omitted from the loop and expression 2 (relational expression) is not included which means the for loop is permanently true and needs to be broken in a different way. Therefore the for loop below is an infinite for loop.
    for (;;) {
        printf("If you're reading this, get to work!");
    }

}