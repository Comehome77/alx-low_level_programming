#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function used to print a name
 * @name: name
 * @f: function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
