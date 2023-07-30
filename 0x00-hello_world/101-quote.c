#include <stdio.h>
#include <unistd.h>

/**
 * main - a simple c program to print to stdout
 *
 * write: command to print given input to stdout
 *
 * Return: 1
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
