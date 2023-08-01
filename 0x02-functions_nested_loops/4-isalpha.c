#include "main.h"

/**
 * _isalpha - function that check if a given data is a letter or not
 *
 * @c: variable that holds the data to be checked
 *
 * Return: 1 if the data is a letter, else 0
 */

int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
