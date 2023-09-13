#include "main.h"

/**
 * times_table - gives the time table of numbers
 *
 * Return: void
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z <= 9)
			{
			_putchar(z + '0');
			}
			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			if (z != 81)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}

		}
		_putchar('\n');
	}
}
