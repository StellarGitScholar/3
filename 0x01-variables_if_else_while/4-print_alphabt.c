#include <stdio.h>

/**
 * main - simple c program to print the alphabets excluding e and q
 *
 * a: variable to store and print the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}

	putchar('\n');

	return (0);
}
