#include "main.h"

int squareroot(int n, int i);

/**
 * _sqrt_recursion - no loop, 1. 2nd function  - checks for square
 * @n: input
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int sqareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqareroot(n, i - 1));
}
