#include "main.h"
/**
 * main - function that prints a square, followed by a new line.
 * @size: size of square
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			x = 0;
			while (x < size)
			{_putchar('0');
				x++;
			}
			_putchar('\n');
			y++;
		}
	}
}
