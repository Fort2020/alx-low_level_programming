#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * checker - checks for valid input
 * @argc: count argument
 * @i: counter for argv[]
 * @j: counter for argv[][]
 * @argv: argument vector
 *
 * Return: 0 if true, 1 on failure
 */
void _print_rev_recursion(char *s)
int checker(int argc, int i, unsigned int j, char *argv[])
{
	if (*s)
	{
	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
	}
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}
/**
 * main - add all arguments together if they are digits
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0 if true, 1 on failure
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (checker(argc, 1, 0, argv) == 1)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		result += atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
