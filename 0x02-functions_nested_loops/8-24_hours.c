#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day in 24hour format
 */

void jack_bauer(void)
{
	int m, n;

	for (m = 0; m <= 23; m++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
	}
}
