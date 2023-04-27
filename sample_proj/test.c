#include <stdio.h>
#include "calc.h"

// double add(double, double);

void main() {
    double a1 = 1;
    double a2 = 2;
    double answer = 0;
    answer = add(a1, a2);
    printf("%f", answer);
}

// double add(double l, double m) {
//     double r = l + m;
//     return r;
// }