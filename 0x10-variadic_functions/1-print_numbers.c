#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (s = 0; s < n; s++)
	{
		printf("%d", va_arg(ap, int));
		if (s < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
