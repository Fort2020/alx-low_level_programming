#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to pront
 *
 * Return: nothing
 */
void print_opcodes(char *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%.2hhx", a[s]);
		if (s < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - prints the opcodes of its own main function
 * @argc: number of argument passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
