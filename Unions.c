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
    example.x = 77.0;
    printf("int x = %d\n", example.x);
    printf("char y = %c\n", example.y);
    printf("float z = %f\n", example.z);
    printf("Here the memory location of x and y are the same so if I change the value of x to be 77, y will also share that value 77 and since its a char, the char value at 77 is M as printed above.\n");

    return 0;

}