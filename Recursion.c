#include<stdio.h>

void printd(int n);

int main(void) {

    int n;
    n = 1200;

    printd(n);

    return 0;

}

void printd(int n) {

    if(n < 0) {
        printf("Number is less than 0.\n");
        putchar('-');
        n = -n;
    }
    else if(n / 10) {
        printf("Number has been divided by 10.\n");
        printd(n/10);
    }
    
    putchar((n % 10) + '0');

}
