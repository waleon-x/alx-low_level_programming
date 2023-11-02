#include <stdio.h>
#include "main.h"

/**
 * main - functions that  prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Advance)
 */
int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);

}
