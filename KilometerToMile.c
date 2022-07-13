#include <stdio.h>

#define KILOMETER 1.60934
#define MILE 0.621371

float *conversionK2M(float kilometer);
float *conversionM2K(float mile);

float *conversionK2M(float kilometer) {

    kilometer * MILE;
    return &kilometer;

}

float *conversionM2K(float mile) {

    mile * KILOMETER;
    return &mile;

}

main(void) {

    float k = 10.0;
    float m = 100.0;

    float *answer1 = conversionK2M(k);
    float *answer2 = conversionM2K(m);

    printf("Kilometers %f to miles: %f\n", k, *answer1);
    printf("miles %f to kilometers: %f\n", m, *answer2);

}