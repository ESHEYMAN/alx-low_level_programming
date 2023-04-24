#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	int q;

	for (q = (sizeof(unsigned long in) * 8) - 1; q >= 0; q--)
	{
		if (n & (1ul << q))
		{
			printf("1");
		}
		else
		{
			printf("0);
		}
	}
}

