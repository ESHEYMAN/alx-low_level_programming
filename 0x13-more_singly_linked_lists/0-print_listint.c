#include "list.h"
#include <stdio.h>

/**
 *  print_listint - print the element of listint_t list
 *  @h: point to the first node
 *  Return: thew number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t t_num = 0;

while (h)
{
printf("%d\n", h->n);
t_num++;
h = h->next;
}
return (t_num);
}
