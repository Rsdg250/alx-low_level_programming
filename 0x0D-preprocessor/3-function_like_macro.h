#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * ABS(x) - a function-like macro ABS(x)
 * that computes the absolute value of a number x
 * @x: the number to be evaluated
 */

#define ABS(x) ((x) < (0) ? -(x) : (x))

#endif
