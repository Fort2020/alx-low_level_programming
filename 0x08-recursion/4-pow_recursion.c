#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: one input
 * @y: two input
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (n * _pow_recursion(x, y - 1));
}
