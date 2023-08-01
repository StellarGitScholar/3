#include "main.h"

/**
 *_abs - function to print the absolute value of
 *	a given integer
 *
 *@n: variable holding the integer to be checked
 *
 *Return: the absolute value of the integer
 */

int _abs(int n)
{
	return (n < 0 ? n * -1 : n);
}
