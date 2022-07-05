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
// IT IS IMPORTANT TO INITIALISE POINTERS LIKE THIS:
// pointer1 = &x;

// ------------------------------------------------------------ //

// This above^ is equivalent to this {

// creating an integer variable called var(value = 10) and pointer4(value = address of var).
int var = 10, *pointer4 = &var;
// DATA TYPE: int   DATA TYPE: int
// NAME: var        NAME: pointer4
// VALUE: 10        VALUE: 10000
// ADDRESS: 10000   ADDRESS: 10004
//** USE POINTERSPIC.JPEG FOR A PICTORIAL REPRESENTATION OF ^ **//

// *pointer4 means Value of pointer4.
// It says go to the address of var and retrieve the value of var.

// }

int main(void) {

    // This will be used to tinker around pointers to get a better understanding of pointers.
    printf("\n*Pointer4 (Grabbing the VALUE of the pointer): %d\n", *pointer4);
    printf("var (Grabbing the VALUE of var): %d\n", var);
    printf("Here the values are the same because var is 10 and pointer4 points to var's value.\n\n");
    
    printf("&Pointer4 (Grabbing the ADDRESS of the pointer): %d\n", &pointer4);
    printf("&var (Grabbing the ADDRESS of var): %d\n", &var);
    printf("As you can see here, the address of pointer4 and var are directly next to (Above or below in the stack) each other.\n\n");
    
    *pointer4 = 99;
    printf("*pointer4 = 99;\n");
    printf("printf(%%d, var) = %d\n", var);
    printf("As you can see here, I have changed the value of the var that pointer4 points to, and I have changed the value through the pointer itself.\n\n");

    int i = 10;
    printf("int i = 10;\n");
    int *p, *q;
    printf("int *p, *q;\n");
    p = &i;
    printf("p = &i;\n");
    q = p;
    printf("q = p;\n");
    printf("*p: %d  *q: %d\n", *p, *q);
    printf("p: %d  q: %d\n", p, q);
    printf("&p: %d  &q: %d\n", &p, &q);
}