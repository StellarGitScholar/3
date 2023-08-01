#include "main.h"

/**
 * print_sign - function that prints the sign of a given number
 *
 * @n: variable that holds the numberto be checked
 *
 * Return: 1 if the value stored in n is greater than 0, 0 if
 *	the valie is 0 and -1 if the value is less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
