#include "s21_math.h"

// вычисляет арккосинус
long double s21_acos(double x) {
    double acos;
    acos = (S21_M_PI / 2) - s21_asin(x);
    return acos;
}
