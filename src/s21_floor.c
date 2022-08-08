#include "s21_math.h"

// возвращает ближайшее целое число, не превышающее заданное значение
long double s21_floor(double x) {
    return (x == (long long int)x) ? x :
    (x > 0) ? (long double)(((long long int)x)) :
    (x < 0) ? (long double)((long long int)x) - 1 : 0;
}
