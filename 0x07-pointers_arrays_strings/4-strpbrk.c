#include "main.h"
/**
 * _strpbrk - function that searches string for arrays
 * @s: input
 * @accept: input
 * Return: Always 0 (Advance)
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
