#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: 0 (SUCCESS)
 */

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
