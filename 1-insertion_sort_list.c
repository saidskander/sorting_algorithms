#include "sort.h"
/**
 * insertion_sort_list - insertion_sort_list
 * @list: listint_t **list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *x1, *x2;
if (!list || !(*list) || !((*list)->next))
return;
x1 = *list;
for (; x1; x1 = x1->next)
{
x2 = x1;
for (; x2;)
{
if (x2->prev == NULL)
break;
if (x2->n < x2->prev->n)
{
x2->prev->next = x2->next;
if (x2->next)
x2->next->prev = x2->prev;
x2->next = x2->prev;
x2->prev = x2->next->prev;
x2->next->prev = x2;
if (x2->prev)
x2->prev->next = x2;
else
{
*list = x2;
x2 = NULL;
}
print_list(*list);
}
else
break;
}
}
}
