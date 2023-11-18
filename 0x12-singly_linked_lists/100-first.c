#include <stdio.h>
void my_init_function(void) __attribute__((constructor));

/**
 *  my_init_function - prints a string before the main function is executed
 *
 * Return: void
**/

void my_init_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
