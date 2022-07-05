#include <stdio.h>

// Pointers are special variables which holds adresses of objects.
int *pointer1;
char *pointer2;
float *pointer3;

int x = 5;
char y = 'A';
float z = 2.4; 

// & operator means the address of.
// * means the value at the address (Also known as Dereferencing).
// * accesses the object the pointer points to.
// *pointer means Value of Pointer

// This is stating that the address(&) of x is to be stored in pointer1.
// pointer1 = &x;

// ------------------------------------------------------------ //

// This above^ is equivalent to this {

// creating an integer variable called var(value = 10) and pointer4(value = address of var).
int var = 10, *pointer4 = &var;
// DATA TYPE: int   DATA TYPE: int
// NAME: var        NAME: pointer4
// VALUE: 10        VALUE: n
// ADDRESS: n       ADDRESS: m
//** USE POINTERSPIC.JPEG FOR A PICTORIAL REPRESENTATION OF ^ **//

// *pointer4 means Value of pointer4.
// It says go to the address of var and retrieve the value of var.

// }

main() {

    // This will be used to tinker around pointer to get a better understanding of pointers.
    printf("%d", *pointer4);

}