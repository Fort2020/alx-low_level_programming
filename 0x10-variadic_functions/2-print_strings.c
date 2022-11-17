#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: a string that is used to separate strings
 * @n: number of unnamed parameters
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int s;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (s = 0; s < n; s++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (s < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
