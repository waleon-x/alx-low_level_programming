#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int u1;

	u1 = n;

	if (n < 0)
	{
		_putchar('-');
		u1 = -n;
	}

	if (u1 / 10 != 0)
	{
		print_number(u1 / 10);
	}
	_putchar((u1 % 10) + '0');
}
