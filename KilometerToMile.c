#include <stdio.h>

float *conversionK2M(float kilometer);
float *conversionM2K(float mile);

float *conversionK2M(float kilometer) {

    float kilo = kilometer * 0.621371;
    return &kilo;

}

float *conversionM2K(float mile) {

    float mil = mile * 1.60934;
    return &mil;

}

main(void) {

    float k = 10.0;
    float m = 100.0;

    float *answer1 = conversionK2M(k);
    float *answer2 = conversionM2K(m);

    printf("Kilometers %f to miles: %f\n", k, *answer1);
    printf("miles %f to kilometers: %f\n", m, *answer2);

}