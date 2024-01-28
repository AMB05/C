#include <stdio.h>
#include <math.h> //library math.h

int main() {
    double a = 5.0;
    double b = 3.0;

    printf("Contoh Program Dengan Memanfaat Libary math.h\n");
    printf("sin(%f) = %f\n", a, sin(a));
    printf("cos(%f) = %f\n", a, cos(a));
    printf("tan(%f) = %f\n", a, tan(a));

    printf("exp(%f) = %f\n", a, exp(a));
    printf("log(%f) = %f\n", a, log(a));

    printf("sqrt(%f) = %f\n", a, sqrt(a));

    printf("pow(%f, %f) = %f\n", a, b, pow(a, b));

    return 0;
}

