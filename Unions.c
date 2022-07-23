#include <stdio.h>

union example {

    int x;
    char y;
    float z;

};

int main(void) {

    // Union is a user defined data type similar to structures however,
    // all the members and the union share the smae memory location.
    union example example = {2, 'a', 1.2};
    printf("Address of x: %p\nAddress of y: %p\nAddress of z: %p\n", &example.x, &example.y, &example.z);
    printf("As you can see, once the program is executed, all the members of the union share the exact same memory location: %p\n", &example);
    
    // In union, members will share the smae memory location.
    // If a change is made to one member then it will be reflected to other members as well.
    example.x = 77;
    printf("x = %d\n", example.x);
    printf("y = %c\n", example.y);

    return 0;

}