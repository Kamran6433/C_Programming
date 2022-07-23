#include <stdio.h>

union example {

    int x;
    char y;
    float z;

};

int main(void) {

    union example example = {2, 'a', 1.2};

}