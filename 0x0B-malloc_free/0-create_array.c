#include "main.h"
		
#include <stdlib.h>
		
/**
		
 * create_array - function that creates array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail	
 */
		
char *create_array(unsigned int size, char c)
		
{
		
	char *str;
		
	unsigned int u;
		

		
	str = malloc(sizeof(char) * size);
		
	if (size == 0 || str == NULL)
		
		return (NULL);
		

		
	for (u = 0; u < size; u++)
		
		str[u] = c;
		
	return (str);
		
}
