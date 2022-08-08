#include "s21_math.h"

// возводит число в заданную степень
long double s21_pow(double base, double y) {  // y = exp
    long double result = 0;
    if (y == 0) result = 1.0L;
    else if (y > 0) result = s21_exp(y * s21_log(base));
    else
        result = 1 / (s21_exp(-y * s21_log(base)));
    return result;
}
