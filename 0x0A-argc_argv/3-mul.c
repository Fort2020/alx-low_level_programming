#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: count two numbers of arguments
 * @argv: arguments
 *
i * Return: 0 if true, 1 on failure
 */
int main(int argc, char *argv[])
{
	int s, t;

	if (argc == 3)
	{
		s = atoi(argv[1]);
		t = atoi(argv[2]);
		printf("%d\n", s *t);

		return (0);
	}
		printf("Error\n");
	return (1);
}
