#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;

	return (0);
}
