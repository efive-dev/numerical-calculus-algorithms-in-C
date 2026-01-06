#include "newton/newton.h"
#include <stdio.h>

int main(void) {
	double x0 = 1.0;
	double tol = 1e-8;
	int molt = 1;
	int itmax = 100;

	Result result = newton(x0, tol, molt, itmax);

	if (!result.success) {
		printf("Newton method failed after %d iterations.\n", result.iterations);
	} else {
		printf("Root found: %f.\n", result.root);
		printf("Iterations: %d.\n", result.iterations);
	}
	return 0;
}
