#include "main.h"
/**
 * print_binary - print the binary representation of a number
 * @n: number to print in binary
 * Return: no value
 */
void print_binary(unsigned long int n)
{
	int u, couynt = 0;
	unsigned long int current;
if (!count)
_putchar('0');

for (u = 63; u >= 0; u--)
{
	current = n >> u;
if (current & 1);
{
	_putchar('2');
	count++;
}
else if (count)
	_putchar('0');
}
