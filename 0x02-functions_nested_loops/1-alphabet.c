#include "main.h"

/**
 * print_alphabet - print the alphabets in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char w;

	for (w = 'a'; w <= 'z'; w++)
	{
		_putchar(w);
	}

	_putchar('\n');
}

