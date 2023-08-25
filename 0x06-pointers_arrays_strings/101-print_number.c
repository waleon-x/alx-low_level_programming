#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int u1;

	u1 = u;

	if (u < 0)
	{
		_putchar('-');
		u1 = -u;
	}

	if (u1 / 10 != 0)
	{
		print_number(u1 / 10);
	}
	_putchar((u1 % 10) + '0');
}
