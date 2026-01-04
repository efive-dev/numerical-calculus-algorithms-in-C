#include "functions_definitions.h"
#include <math.h>

#define EPSILON 1e-12

/*
 * Computes:
 * f(x) = (a*x^3 - b*x + c) / (c*x^4 - 23)
 *
 * Returns NAN if denominator is zero or near zero
 */
double function(double a, double b, double c, double x)
{
    double x2 = x * x;
    double x3 = x2 * x;
    double x4 = x2 * x2;

    double denominator = c * x4 - 23.0;

    if (fabs(denominator) < EPSILON) {
        return NAN;
    }

    double numerator = a * x3 - b * x + c;
    return numerator / denominator;
}

/*
 * Computes the derivative of:
 * f(x) = (a*x^3 - b*x + c) / (c*x^4 - 23)
 *
 * Uses quotient rule:
 * f'(x) = [N'(x)D(x) - N(x)D'(x)] / D(x)^2
 *
 * Returns NAN if denominator is zero or near zero
 */
double derivative(double a, double b, double c, double x)
{
    double x2 = x * x;
    double x3 = x2 * x;
    double x4 = x2 * x2;

    double denominator = c * x4 - 23.0;

    if (fabs(denominator) < EPSILON) {
        return NAN;
    }

    double N  = a * x3 - b * x + c;
    double Nd = 3.0 * a * x2 - b;
    double Dd = 4.0 * c * x3;

    return (Nd * denominator - N * Dd) / (denominator * denominator);
}
