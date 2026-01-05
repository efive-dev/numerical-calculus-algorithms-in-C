#include <stdio.h>
#include <math.h>
#include "newton.h"


int main(void)
{
    double x0 = 1.0;
    double tol = 1e-8;
    int itmax = 100;

    double root = newton(x0, tol, 1, itmax);

    if (isnan(root)) {
        printf("Newton method failed.\n");
    } else {
        printf("Root found: %.10f\n", root);
    }



    return 0;
}
