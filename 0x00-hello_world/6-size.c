#include <stdio.h>
/**
 * main - print the size of various types
 *
 * Return: Always 0 success
*/
int main(void)
{
	char 1;
	int 2;
	long int 3;
	long long int 4;
	float 5;
	printf("Size of a char: %d 1 byte(s\n", sizeof(char));
	printf("Size of an int: %d 4 byte(s\n", sizeof(int));
	printf("Size of a long int: %d 4 byte(s\n", sizeof(long int));
	printf("Size of a long long int: %d 8 byte(s\n", sizeof(long long int));
	printf("Size of a float: %d 4 byte(s\n", sizeof(float));
	return (0);
}
