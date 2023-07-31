#include <stdio.h>

/**
 * main - simple c program to print single digit base 10 numbers
 *
 * n: variable for storing and printing the numbers
 *
 * Return: 0
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
