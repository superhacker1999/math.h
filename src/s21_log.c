#include "s21_math.h"

// вычисляет натуральный логарифм
long double s21_log(double x) {
    long double sign = 1, pow = 0, count = 2, result, temp;
    if (x < 0) {
        x = x * -1;
        sign = sign * -1;
    } else {
        x = x * 1;
        sign = sign * 1;
    }
    while ((x >= 10) || (x < 1 && x > 0)) {
        if (x < 1 && x > 0) {
            x = x * 10;
            pow = pow - 1;
        } else {
            x = x * 0.1;
            pow = pow + 1;
        }
    }
    x = sign * x / 10;
    if (x < 0) {
        result = -S21_NAN;
    } else if (x == 0) {
        result = -S21_INF;
    } else {
        x--;
        result = x;
        temp = x;
        while (s21_fabs(result) > S21_EPS) {
            result = result * -x * (count - 1) / count;
            count = count + 1;
            temp = temp + result;
        }
        result = temp + (pow + 1) * S21_M_LN10;
    }
    return (x == 1) ? 0 : result;
}
