#include "main.h"

/**
 * print_diagonal - Draw a diagonal line according to parameters
 *@n: The number of times to print diagonal line
 * Return: Always 0
 */

void print_diagonal(int n)
{
	x, y;
	if (n <= 0)
	{
		_putchar('\0');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}

}
