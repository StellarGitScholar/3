#include <stdio.h>

/**
 * main - c program to print lowercase alphabets in reverse
 *
 * a: variable to store and print the alphabets
 *
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);

	putchar('\n');

	return (0);
}
