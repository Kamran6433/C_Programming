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
// so - struct {everything inside} car1, car2, car3;
struct {

    char *engine;
    char *fuelType;
    int fuelTankCap;
    int seatingCap;
    float cityMileage;

} car1, car2;

int main(void) {
    

}