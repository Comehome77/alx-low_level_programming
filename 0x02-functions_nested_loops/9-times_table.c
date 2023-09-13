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
			if (z <= 9 && y != 9 && y !=0)
			{
			_putchar(' ');
			_putchar(z + '0');
			_putchar(',');
			_putchar(' ');			
			}
			else if (y == 0)
			{
				_putchar(z + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (z <= 9 && y == 9)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z > 9 && z != x * 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (z > 9 && y == 9)
			{
				_putchar(z / 10 + '0');
                                _putchar(z % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
