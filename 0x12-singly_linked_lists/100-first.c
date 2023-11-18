#include <stdio.h>

/**
 *  my_init_function - prints a string before the main function is executed
 *
 * Return: void
**/

void my_init_function(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
