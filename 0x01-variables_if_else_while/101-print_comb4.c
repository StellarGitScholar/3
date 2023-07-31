#include <stdio.h>

/**
 * main - simple c program to print number combos
 *
 * m, n, o: variables to store and print numbers
 *
 * Return: 0
 */

int main(void)
{
	int m, n, o;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (o = n + 1; o <= '9'; o++)
			{
				putchar(m);
				putchar(n);
				putchar(o);

				if (m != '7' || n != '8' || o != '9')
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
