#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @n: encode the string
 *
 * Return: the resulting string
 */
char *rot13(char *n)
{
	int s, t;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (s = 0; n[s] != '\0'; s++)
	{
		for (t = 0; a[t] != '\0'; t++)
		{
			if (n[s] == a[t])
			{
				n[s] = b[t];
				break;
			}
		}
	}
	return (n);
}
