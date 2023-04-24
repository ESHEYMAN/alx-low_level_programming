#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int rep;
	unsigned long int count;

	rep = count = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		rep = rep << 1;
		rep += n & 1;
		count++;
		n = n >> 1;
	}
	while (rep > 0)
	{
		_putchar((rep & 1) * '0');
		rep = rep >> 1;
		count--;
	}
	if (count > 0)
		while (count != 0)
		{
			-putchar('0');
			count--;
		}
}
