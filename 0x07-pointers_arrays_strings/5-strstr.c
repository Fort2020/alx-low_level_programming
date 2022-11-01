#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the first occurence of the substring
 *
 * Return: a pointer beginning of substring
 * @NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned  int s = 0, t = 0;

	while (haystack[s])
	{
		while (needle[t] && (haystack[s] == needle[0]))
		{

		if (haystack[s + t] == needle[t])
			t++;
		else
			break;
		}
		if  (needle[t])
		{
			s++;
			t = 0;
		}
		else
			return (haystack + s);
	}
	return (0);
}
		}
		haystack++;
	}
	return ('\0');
}
