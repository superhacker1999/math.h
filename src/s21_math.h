#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#define S21_M_E 2.7182818284590452354  /* e */
#define S21_M_LOG2E 1.4426950408889634074  /* log_2 e */
#define S21_M_LOG10E 0.43429448190325182765  /* log_10 e */
#define S21_M_LN2 0.69314718055994530942  /* log_e 2 */
#define S21_M_LN10 2.30258509299404568402  /* log_e 10 */
#define S21_M_PI 3.14159265358979323846  /* pi */
#define S21_M_PI_2 1.57079632679489661923  /* pi/2 */
#define S21_M_PI_4 0.78539816339744830962  /* pi/4 */
#define S21_M_1_PI 0.31830988618379067154  /* 1/pi */
#define S21_M_2_PI 0.63661977236758134308  /* 2/pi */
#define S21_M_2_SQRTPI 1.12837916709551257390  /* 2/sqrt(pi) */
#define S21_M_SQRT2 1.41421356237309504880  /* sqrt(2) */
#define S21_M_SQRT1_2 0.70710678118654752440  /* 1/sqrt(2) */
#define MAX_LONG_DOUBLE 1.79769313486231571e+308
#define MAX_DOUBLE 1.79769313486231571e+308
#define S21_EPS 1e-17
#define S21_INF 1.0 / 0.0
#define S21_NAN 0.0 / 0.0

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_pow(double base, double y);
long double s21_fmod(double x, double y);
long double s21_ceil(double x);
long double s21_floor(double x);
long double s21_exp(double x);
long double s21_cos(double x);
long double s21_sin(double x);
long double s21_log(double x);
long double s21_tan(double x);
long double s21_sqrt(double x);
long double s21_asin(double x);
long double s21_acos(double x);
long double s21_atan(double x);

#endif  // SRC_S21_MATH_H_
