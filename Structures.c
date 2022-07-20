#include <stdio.h>

// A structure is a user defined data type that can be used to group elements of 
// different types together into a SINGLE TYPE.

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
    // Structures work very similarly to objects.
    // Here I declared a car structure called bugatti and initilaised it with its values.
    struct car bugatti = {"V10 Engine", "Petrol", 40, 2, 6.3};
    printf("bugatti Engine: %s\n", bugatti.engine);
    printf("bugatti Fuel: %s\n", bugatti.fuelType);
    printf("bugatti Fuel capacity: %d\n", bugatti.fuelTankCap);
    printf("bugatti Seating capacity: %d\n", bugatti.seatingCap);
    printf("bugatti city mileage: %0.2fkmpl\n", bugatti.cityMileage);
    
}