#include "lists.h"

void before_main(void) __attribute__((constructor));

/**
 * before_main - function that prints string before the main function executed
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
