#include "main.h"

/**
 * _islower - function that checks for lowercase characters
 *
 * @c: variable that holds the character to be checked
 *
 * Return: 1 if c is lowercase else return 0
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
