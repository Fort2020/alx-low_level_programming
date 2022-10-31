#include "main.h"

/**
 * _stchr - locates a character in a string
 * @s: in the string
 * @c: occurence of the character
 * Return: pointer to the occurence of the character
 */
char *_strchr(char *s, char c);
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
