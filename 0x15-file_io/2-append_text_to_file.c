#include "main.h"

/**
 * _strlen - find the length of a string
 * @str: pointer to the string
 *
 * Return: the length of the string.
 */
size_t _strlen(char *str)
{
	size_t n;

	for (n = 0; str[n]; n++)
		;
	return (n);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	if (text_content != NULL)
		len = write(o, text_content, _strlen(text_content));

	close(o);
	if (len == -1)
		return (-1);

	return (1);
}
