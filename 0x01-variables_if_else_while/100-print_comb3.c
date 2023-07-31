#include <stdio.h>

/**
 * main - simple c program to print number combos
 *
 * m: variable to store and print the numbers
 *
 * n: variable to store and print the numbers
 *
 * Return: 0
 */

int main(void)
{
	int m, n;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (m != n && m < n)
			{
				putchar(m);
				putchar(n);

				if (m != '8' || n != '9')
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
