#include <stdio.h>

/**
 * main - c program to print base 16 numbers
 *
 * a: variable to store and print the numbers
 *
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
