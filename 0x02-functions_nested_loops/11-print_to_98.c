#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98, followed by a new line.
 * it must be separated by a comma, followed by a space.
 * @n: the number begin counting.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
