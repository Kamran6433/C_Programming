#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int conversion(int a);

int main(void) {

    int a;
    printf("%d", conversion(a));

// int fahrenheit;

// for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP) {
//     printf("%3d %6.1f\n", fahrenheit, (5.0/9.0)*(fahrenheit - 32));
//     }

} 

int conversion(int fahrenheit) {

    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP) {
    printf("%3d %6.1f\n", fahrenheit, (5.0/9.0)*(fahrenheit - 32));
    }

}