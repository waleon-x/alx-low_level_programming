
#include "main.h"

/**
 * _memset - a Program that fills a block of memory with specific value
 * @s: starting address of memory
 * @b: entered value
 * @n: bytes to be changed
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
   	int a = 0;

   	for (; n > 0; a++)
   	{
          	s[a] = b;
          	n--;
   	}
   	return (s);
}
