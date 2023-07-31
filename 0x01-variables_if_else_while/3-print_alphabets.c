#include <stdio.h>

/**
 * main - a simple c program to pri t the alphabet in both
 *	upper and lower case
 *
 * a: variable for storing and printing the alphabet
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
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
