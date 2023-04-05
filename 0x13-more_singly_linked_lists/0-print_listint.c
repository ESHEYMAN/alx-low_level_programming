#include "list.h"

/**
 *  print_listint - print the element of listint_t list
 *  @h: point to the first node
 *
 *  Return: thew number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
