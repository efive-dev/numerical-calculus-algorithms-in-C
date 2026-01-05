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

#endif /* FUNCTION_DEF_H */
