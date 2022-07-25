// There is a bus moving in the city, and it takes and drop some people in each bus stop.

// You are provided with a list (or array) of integer pairs. Elements of each pair represent number of people get into bus (The first item) and number of people get off the bus (The second item) in a bus stop.

// Your task is to return number of people who are still in the bus after the last bus station (after the last array). Even though it is the last bus stop, the bus is not empty and some people are still in the bus, and they are probably sleeping there :D

// Take a look on the test cases.

// Please keep in mind that the test cases ensure that the number of people in the bus is always >= 0. So the return integer can't be negative.

// The second value in the first integer array is 0, since the bus is empty in the first bus stop.

#include <stdio.h>
#include <stddef.h>

int bus_terminus (size_t nb_stops, const short bus_stops[nb_stops][2]) {

    // This bus value will contain the number of people in the bus and this bus variable will be returned.
    int bus = 0; // 🚌 :p

    // I will need two for loops to access the entire 2D array.
    for (int i = 0; i < nb_stops; i++) {
        for (int j = 0; j < 2; j++) {
            if (j != 1) {
                bus += bus_stops[i][j];
            }
            else {
                bus -= bus_stops[i][j];
            }
        }
    }
    return bus;

} 

// Best version I found and the quickest.

int bus_terminus (size_t nb_stops, const short bus_stops[nb_stops][2])
{
  auto bus = 0; // 🚌 :p
  for(size_t i = 0; i<nb_stops; i++)
    {
    bus += bus_stops[i][0];
    bus-= bus_stops[i][1];
  }
  return bus;
}