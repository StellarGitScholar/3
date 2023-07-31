#include <stdio.h>

/**
 * main - simple c program to print single digit number combos
 *
 * n: variable to store and print the numbers
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (i != '9')
		{
			putchar(',');

			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
