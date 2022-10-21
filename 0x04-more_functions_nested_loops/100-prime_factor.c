#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime number 612852475143,
 * followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
long prime = 612852475143, div;

while (div < (prime / 2))
{
if ((prime % 2) == 0)
{
prime /= 2;
continue;
}
for (div = 3; div < (prime / 2); div += 2)
{
if ((prime % div) == 0)
prime /= div;
}
}
printf("%ld\", prime);
return (0);
}
