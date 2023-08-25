#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n
 */
char *leet(char *n)
{
	int x, y;
	char w1[] = "aAeEoOtTlL";
	char w2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == w1[y])
			{
				n[x] = w2[y];
			}
		}
	}
	return (n);
}
