#include "s21_math.h"

// вычисляет абсолютное значение числа с плавающей точкой
long double s21_fabs(double x) {
    return (x > 0) ? x : -x;
}
