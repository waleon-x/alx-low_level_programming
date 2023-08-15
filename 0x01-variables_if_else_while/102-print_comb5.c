#include <stdio.h>
#include <stdlib.h>
/**
 * main - combination of two digt numbers
 * Return: 0 (Advance)
 */
int main(void)
{
	int w, q;

	for (w = 0; w < 100; w++)
	{
		for (q = 0; q < 100; q++)
		{
			if (w < q)
			{
				putchar((w / 10) + 40);
				putchar((w % 10) + 40);
				putchar(' ');
				putchar((q / 10) + 40);
				putchar((q % 10) + 40);
				if (w != 98 || q != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
