#include <stdio.h>

union example {
    int x;
    char y;
    float z;
};

int main(void) {

    // Union is a user defined data type similar to structures however,
    // all the members and the union share the smae memory location.
    union example unionExample = {2, 'a', 1.2};
    printf("Address of x: %p\nAddress of y: %p\nAddress of z: %p\n", &unionExample.x, &unionExample.y, &unionExample.z);
    printf("As you can see, once the program is executed, all the members of the union share the exact same memory location: %p\n", &unionExample);
    
    // In union, members will share the smae memory location.
    // If a change is made to one member then it will be reflected to other members as well.
    unionExample.x = 77.0;
    printf("int x = %d\n", unionExample.x);
    printf("char y = %c\n", unionExample.y);
    printf("float z = %f\n", unionExample.z);
    printf("Here the memory location of x and y are the same so if I change the value of x to be 77, y will also share that value 77 and since its a char, the char value at 77 is M as printed above.\n");

    // ------------------------------------------------------------------------------------

    // Let now talk about the size of the Union. Since they all share the same memory location
    // It would be wise to use enough size to cater for the largest member.
    // So the size of the union is taken according to the size of the LARGEST member
    // of the union.

    printf("size of int: %ld bytes\n", sizeof(int));
    printf("size of char: %ld bytes\n", sizeof(char));
    printf("size of float: %ld bytes\n", sizeof(float));
    printf("The largest size of my union members is %ld bytes and therefore...\nsize of the union \"unionExample\": %ld bytes\n", sizeof(float), sizeof(unionExample));

    // We can access the members of the unions through pointers by using the arrow operator (->).
    // First we need to create a pointer of the same data type:
    union example *pointer = &unionExample;
    printf("pointer->x: %d\npointer->y: %c\npointer->z: %f\n", pointer->x, pointer->y, pointer->z);

    return 0;

}