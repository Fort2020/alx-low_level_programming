#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int ini = 0, fb = 0;
	char d;

	while (s[fb] != 0)
		fb++;
	fb--;

	while (ini < fb)
	{
		d = s[ini];
		s[ini] = s[fb];
		s[fb] = d;
		ini++;
		fb--;
	}
}
