#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char w;
	int x;

	x = 0;

	while (x <= 9)
	{
		for (w = 'a'; w <= 'z'; w++)
		{
			_putchar(w);
			_putchar('\n');
			x++;
		}
	}
}
