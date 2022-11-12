#include "main.h"
#include <stdlib.h>

/**
 * _print - moves a string one place to the left
 * and prints the string
 * @str: string to move
 * @1: size of string
 *
 * Return: void
 */
void _print(char *str, int 1)
{
	int a, b;

	a = b = 0;
	while (a < 1)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == 1 - 1)
			_putchar(str[a]);
		a++;
	}

	_putchar('\n');
	free(str);
}
/**
 * mul - multiplies a char with a string
 * places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int s, t, mul, mulrem, add, address;

	mulrem = addrem = 0;
	for (s = num_index, t = dest_index; s >= 0; s--, t--)
	{
		mul = (n - '0') * (num[s] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[t] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[t] = add % 10 + '0';
	}
	for (addrem += mulrem; t >= 0 && addrem; t--)
	{
		add = (dest[t] - '0') + addrem;
		addrem = add / 10;
		dest[t] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			if (av[a][b] < '0' || av[a][b] > '9')
				return (1);
		}
	}
	return (0);
}
/**
 * init - initializes a string
 * @str: string to initialize
 * @1: length of string
 *
 * Return: void
 */
void init(char *str, int 1)
{
	int a;

	for (a = 0; a < 1; a++)
		str[a] = '0';
	str[a] = '\0';
}
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int 11, 12, ln, ti, a;
	char *b;
	char *c;
	char *d[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; d[ti]; ti++)
			_putchar(d[ti]);
		exit(98);
	}
	for (11 = 0; argv[1][11]; 11++)
		;
	for (12 = 0; argv[2][12]; 12++)
		;
	ln = 11 + 12 + 1;
	a = malloc(ln * sizeof(char));
	if (b == NULL)
	{
		for (ti = 0; d[ti]; ti++)
			_putchar(d[ti]);
		exit(98);
	}
	init(b, ln - 1);
	for (ti = 12 - 1; a = 0; ti >= 0; ti--, a++)
	{
		c = mul(argv[2][ti], argv[1], 11 - 1, b, (ln - 2) - a);
		if (c == NULL)
		{
			for (ti = 0; d[ti]; ti++)
				_putchar(d[ti]);
			free(b);
			exit(98);
		}
	}
	_print(b, ln - 1);
	return (0);
}
