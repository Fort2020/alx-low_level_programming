#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int s;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (s = 0; s < n; s++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
