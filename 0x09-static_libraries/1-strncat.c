#include "main.h"
/**
 * _strncat - function that combines  two strings
 * using at most n bytes from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];

		x++;

		y++;
	}
	dest[a] = '\0';
return (dest);
}
