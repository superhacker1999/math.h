#include "s21_math.h"

// вычисляет синус
long double s21_sin(double x) {
    int n = 1;
    double sin = x, t = x;
    while (!(t >= -0.0000000001 && t <= 0.000000001)) {
        t = (-t) * (x * x) / ((2 * n + 1) * (2 * n));
        sin = sin + t;
        n++;
    }
    return sin;
}
