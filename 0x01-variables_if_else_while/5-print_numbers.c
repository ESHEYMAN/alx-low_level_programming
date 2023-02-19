#include <stdio.h>
/**
 * main - prints all single digit number of base
 * 10 starting from 0, followew by a new line
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
