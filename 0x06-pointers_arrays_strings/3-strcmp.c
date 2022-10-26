#include "main.h"

/**
 * _strcmp - a function that compares pointers to two strings
 * @s1: a pointer to first string to be compared
 * @s2: a pointer to the second string to be compared
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
