#include "newton.h"
#include "functions_definitions.h"
#include <math.h>

const double A = 3.0;
const double B = 0.15;
const double C = 4;


double newton(double x0, double tol, int molt, int itmax)
{
    double fx, f1x;
    double x = x0;

    for (int i = 0; i < itmax; i++) {
        fx  = function(A, B, C, x0);
        f1x = derivative(A, B, C, x0);

        if (isnan(fx) || isnan(f1x) || fabs(f1x) < tol) {
    return NAN;
}


        x = x0 - molt * fx / f1x;

        if (fabs(x - x0) / (1 + fabs(x0)) <= tol) {
            return x;
        }

        x0 = x;
    }

    return x;
}
