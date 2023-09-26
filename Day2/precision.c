#include <stdio.h>

int main() {

    float val = 456.7893452556;
    printf("%f ", val);

    float val2 = 456.7893452556;
    printf("%.3f ", val2); //after . 3 digit print

    double val1 = 456.7893452556;
    printf("%f", val1);
    return 0;
}
//in float  . after 6 digits only print sometimes 6 digit rounding the value.