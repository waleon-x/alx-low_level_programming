#include "main.h"
/**
 * _strchr - function for  Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Advance)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)

	{
		if (s[x] == c)
		return (&s[x]);
	}
	return (0);
}
