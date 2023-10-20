#include <stdio.h>

/**
 * mainhare - function executed before main
 * Return: none
 */

void __attribute__ ((constructor)) mainhare()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
