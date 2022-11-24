#include <stdio.h>

/**
 * thetortoiseAndtheHare - apply the constructor
 * attribute to thetortoiseAndtheHare()
 * so that it will be executed before main()
 */
void thetortoiseAndtheHare(void) __attribute__ ((constructor));

/**
 * thetortoiseAndtheHare - implementation of thetortoiseAndtheHare
 */
void thetortoiseAndtheHare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
