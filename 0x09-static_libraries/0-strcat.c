
#include "main.h"

/**
 *  _strcat - function that combines two strings
 *  @dest: entered value
 *  @src: entered value
 *  Return: void
 */

char *_strcat(char *dest, char *src)

{
        	int x;

        	int y;

        	x = 0;

        	while (dest[a] != '\0')

        	{
                    	x++;
        	}
        	y = 0;
        	while (src[y] != '\0')

        	{
                    	dest[x] = src[y];
                    	x++;

                    	y++;
        	}
        	dest[a] = '\0';
        	return (dest);
}
