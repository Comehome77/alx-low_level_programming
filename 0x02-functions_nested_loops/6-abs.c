#include "main.h"

/**
 * _abs - gives absoulte value of a number
 * @x: parameter
 * Return: x or -x
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else if (x >= 0)
	{
		return (x);
	}
	return (0);
}
