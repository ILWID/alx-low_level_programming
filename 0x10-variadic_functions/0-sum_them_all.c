#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(agrs, n);

	for (i = 0, i < n, i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
