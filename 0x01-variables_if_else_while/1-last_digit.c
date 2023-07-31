#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - simple c program to check the last digit of the number
 *	stored in the variable n
 *
 * n: variable where the number is stored
 *
 * last: variable to store the last digit of n
 *
 * Return: 0
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	printf("Last digit of %d is %d", n, last);

	if (last > 5)
	{
		puts(" and is greater than 5");
	} else if (last == 0)
	{
		puts(" and is 0");
	} else
	{
		puts(" and is less than 6 and not 0");
	}

	return (0);
}
