#include <stdio.h>
#include "lists.h"
/**
 * list_len - lenght of ll
 * @h: pointer to node
 *
 * Return: Size of list
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
	h = h->next;
	n++;
}
return (n);
}
