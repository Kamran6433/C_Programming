#include <stdio.h>

union example {

    int x;
    char y;
    float z;

};

int main(void) {

    // Union is a user defined data type similar to structures however,
    // all the members and the union share the smae memory location.
    union example example = {2, "a", 1.2};
    printf("Address of x: %p, Address of y: %p, Address of z: %p\n", &example.x, &example.y, &example.z);
    printf("As you can see, once the program is executed, all the members of the union share the exact same memory location: %p", &example);

}