#include "main.h"

/**
 * main - simple c program to print putchar
 *
 * Return: 0
 */

int main(void)
{
	unsigned int a;

	char c[] = "_putchar";

	for (a = 0; a <= 7; a++)
		_putchar(c[a]);

	_putchar('\n');

	return (0);
}
