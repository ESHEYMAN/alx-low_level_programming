#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints in lowercase, followed by a new line
 * Return: 0 (SUCCESS)
 */

int main(void)
{
char current = 'a';
while (current <= 'z')
{
putchar(current);
current++;
}
putchar('\n');
return (0);
}
