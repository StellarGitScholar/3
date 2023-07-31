#include <stdio.h>

/**
 * main - simple c program that prints the alphabets in lowercase
 *
 * a: variable used to store and print the alphabets
 *
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
