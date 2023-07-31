#include <stdio.h>

/**
 * main - c program to print the single digit numbers of base 10
 *
 * n: variable to store and print the numbers
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
