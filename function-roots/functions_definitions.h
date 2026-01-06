#ifndef FUNCTIONS_DEFINITIONS_H
#define FUNCTIONS_DEFINITIONS_H

/*
 * Computes:
 * f(x) = (a*x^3 - b*x + c) / (c*x^4 - 23)
 */
double function(double a, double b, double c, double x);

/*
 * Computes the derivative of f(x) with respect to x
 */
double derivative(double a, double b, double c, double x);

/*
 * Struct to bundle the results, it contains:
 *    - The root
 *    - The number of iterations
 *    - If the method succeded or not
 */
typedef struct {
	double root;
	int iterations;
	int success;
} Result;

#endif /* FUNCTION_DEF_H */
