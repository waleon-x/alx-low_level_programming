#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Return 0 (Advance)
 */

int main(void)
{
	int n;

	int w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	w = n % 10;
	if (w > 5)
		printf("Last digit of %d is %d and greater than 5\n", n, w);
	if (w == 0)
		printf("Last digit of %d is %d and is 0\n", n, w);
	if (w < 6 && w != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, w);
	return (0);
}
