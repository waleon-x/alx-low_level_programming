#include "main.h"
/**
 * _strstr -function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Advnce)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *w = haystack;
		char *q = needle;

		while (*w == *q && *q != '\0')
		{
			w++;
			q++;
		}

		if (*q == '\0')
			return (haystack);
	}
	return (0);
}
