#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random passwords for the program 101-crackme
 * Return: Always 0 (Advance)
 */
int main(void)
{
	int pass[100];
	int x, sum, n;

	sum = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		sum += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
