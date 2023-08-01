#include "main.h"

/**
 *print_last_digit - function that prints the last digit of a
 *	given number
 *
 *@n: variable holding the number
 *
 *Return: The last digit of the number
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
