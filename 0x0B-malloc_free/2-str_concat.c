#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: string to add to end of first string
 *
 * Return: pointer to a newly allocated string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0;
	char *ptr, *ret;

	ptr = s1;
	if (s1)
		while (*ptr++)
			len1++;
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr++)
			len2++;
	else
		s2 = "";
	ret = malloc(len1 + len2 + 1);
	if (!ret)
		return (NULL);

	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (ret);
}
