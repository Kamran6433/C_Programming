#include <stdio.h>

// typedef is a way to declar our own data types.
// It can be used to shorten structures.
typedef int car;
typedef struct house {

    int doorNumber;
    char *address;

} house;

int main(void) {

    car var = 10;
    printf("%d\n", var);

    house myHouse;
    myHouse.doorNumber = 1;
    myHouse.address = "WheelieBin Drive";
    printf("Address: %s, Doornumber: %d", myHouse.address, myHouse.doorNumber);

    return 0;

}
