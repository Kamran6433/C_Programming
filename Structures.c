#include <stdio.h>
#pragma pack(1)

// A structure is a user defined data type that can be used to group elements of 
// different types (char, int, float) together into a SINGLE TYPE.

// Structure gives us the power to define our own data types.

// Car 1 specifications:

// Engine: DDis 190 Engine
// Fuel Type: Petrol
// Feul Tank Capacity: 37
// Seating Capacity: 5
// City Milage: 19.74 kmpl

// Car 2 specifications:

// Engine: 1.2L Kappa Dual VTVT
// Fuel Type: Diesel
// Feul Tank Capacity: 35
// Seating Capacity: 5
// City Milage: 22.54 kmpl

// As you can see here i've created my own data type.
// This is similar to defining an integer - int x, y, z;
// so - struct {everything inside} car1, car2;
// It is completely fine to not name the structure however if you 
// want to use the same structure again you'll have to write it out again 
// unless you've given it a name.
struct {

    char *engine;
    char *fuelType;
    int fuelTankCap;
    int seatingCap;
    float cityMileage;

} car1, car2;

// This structure is in the global scope (Eveything can access it).
struct car {

    char *engine;
    char *fuelType;
    int fuelTankCap;
    int seatingCap;
    float cityMileage;

} Nissan, Audi;

int main(void) {

    // This structure is the same car structure but declared locally 
    // (Only availabe within this main function).
    struct car bmw;
    // Structure Padding Neso Academy on youtube:
    // Turn off structure padding on the top by commenting the #pragma pack(1) and 
    // then run the program and observe the differences of the size of the car structure.
    printf("Size in bytes of char: %lu\n", sizeof(char));
    printf("Size in bytes of char: %lu\n", sizeof(char));
    printf("Size in bytes of int: %lu\n", sizeof(int));
    printf("Size in bytes of int: %lu\n", sizeof(int));
    printf("Size in bytes of float: %lu\n", sizeof(float));
    printf("Size in bytes of car: %lu\n", sizeof(bmw));
    // Structures work very similarly to objects.
    // Here I declared a car structure called bugatti and initilaised it with it's values.
    struct car bugatti = {"V10 Engine", "Petrol", 40, 2, 6.3};
    printf("bugatti Engine: %s\n", bugatti.engine);
    printf("bugatti Fuel: %s\n", bugatti.fuelType);
    printf("bugatti Fuel capacity: %d\n", bugatti.fuelTankCap);
    printf("bugatti Seating capacity: %d\n", bugatti.seatingCap);
    printf("bugatti city mileage: %0.2fkmpl\n", bugatti.cityMileage);
    // You're also able to assign values to the members in any order:
    // This is called designated initialisation. Here the order doesn't matter.
    struct car lamborghini = {.cityMileage = 4.3, .fuelType = "Petrol", .engine = "V10 Engine", .seatingCap = 2, .fuelTankCap = 60};
    printf("Lamboghini: %s %s %f %d %d\n", lamborghini.fuelType, lamborghini.engine, lamborghini.cityMileage, lamborghini.seatingCap, lamborghini.fuelTankCap);

    //-----------------------------------------------------------------------------------

    // array of 3 cars:
    struct car cars[3];
    // Im only going to change the seating capacity to save time.
    cars[0].seatingCap = 1000;
    cars[1].seatingCap = 2000;
    cars[2].seatingCap = 0;
    printf("Seating capacity of each car in the array: %d %d %d\n", cars[0].seatingCap, cars[1].seatingCap, cars[2].seatingCap);

    //-----------------------------------------------------------------------------------

    struct abc {
        int x;
        int y;
    };

    struct abc a = {2, 5};
    struct abc *pointer = &a;

    // (*pointer).x is dereferencing pointer then grabbing its value. 
    // it's the same as saying a.x it can also be written like pointer->x.
    printf("Pointer Demonstration with structures\nx: %d, y: %d\n", (*pointer).x, (*pointer).y);

    //-----------------------------------------------------------------------------------

    // This was just a test to see if this is allowed and it is allowed.
    struct test {
        int x, y, z;
    };

    struct test one = {1, 2, 3};

    printf("%d %d %d", one.x, one.y, one.z);

}