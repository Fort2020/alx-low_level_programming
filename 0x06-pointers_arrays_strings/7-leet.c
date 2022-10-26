#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @b: input
 *
 * Return: the b value
 */
char *leet(char *b)
{
	int n, s;

	char *c = "aAeEoOtTlL";
	char *d = "4433007711";

	for (n = 0; b[i] != '\0'; n++)
	{
		for (s = 0; s < 10; s++)
		{
			if (b[n] == c[s])
			{
				b[n] = d[s];
			}
		}

		return (b);
	}
}
