// Write function heron which calculates the area of a triangle with sides a, b, and c (x, y, z in COBOL).

// Heron's formula:

// \sqrt{s * (s - a) * (s - b) * (s - c)} 
 
// where

// s = (a + b + c)/2​
 
// Output should have 2 digits precision.

#include <math.h>
#include <stdio.h>

float heron(int a, int b, int c) {
    
    float s = ((float) a + (float) b + (float) c) / 2;
    float answer = sqrt(s * (s - a) * (s - b) * (s - c));
    return answer;

}