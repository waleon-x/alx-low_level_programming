#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: input
 * Return: input
 */
void puts2(char *str)
{
	int longi = 0;
	int x = 0;
	char *w = str;
	int y;

	while (*w != '\0')
	{
		w++;
		longi++;
	}
	x = longi - 1;
	for (y = 0; y <= x; y++)
	{
		if (y % 2 == 0)
		{_putchar(str[y]);
		}
	}
	_putchar('\n');
}
