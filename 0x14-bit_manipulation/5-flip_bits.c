#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number
 * @m: number to flip.
 *
 * Return: number of bit to flip from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int val = 0;
	unsigned long int xor_numb = n ^ m;

	while (xor_numb)
	{
		val += xor_numb & 1;
		xor_numb >>= 1;
	}

	return (val);
}
