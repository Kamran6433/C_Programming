#include <stdio.h>

float *conversionK2M(float kilometer);
float *conversionM2K(float mile);

float *conversionK2M(float kilometer) {

    float answer = kilometer * 0.621371;
    return &answer;

}

float *conversionM2K(float mile) {

    float answer = mile * 1.60934;
    return &answer;

}

main(void) {

    float k = 10.0;
    float m = 100.0;

    float *answer1 = conversionK2M(k);
    float *answer2 = conversionM2K(m);

    printf("Kilometers to miles: %f", *answer1);
    printf("%f", *answer2);

}