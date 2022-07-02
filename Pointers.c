

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

// This is stating that the address(&) of x is to be stored in pointer1.
pointer1 = &x;

// ------------------------------------------------------------ //

// This above^ is equivalent to this {

// creating an integer variable called var(value = 10) and pointer4(value = address of var).
int var = 10, *pointer4 = &var;

//** USE POINTERSPIC.JPEG FOR A PICTORIAL REPRESENTATION OF ^ **//

// }