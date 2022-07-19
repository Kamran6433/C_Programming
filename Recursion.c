#include<stdio.h>

void printd(int n);

int main(void) {

    int n;
    n = 15000;

    printd(n);

    return 0;

}

void printd(int n) {

    if(n < 0) {
        putchar('-');
        n = -n;
    }
    if(n / 10) {
        printf("Number has been divided by 10.\n");
        printd(n/10);
    }
    
    putchar(n%10+'0');

}
