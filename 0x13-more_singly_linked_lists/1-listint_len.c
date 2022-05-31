#include "lists.h"
/**
 * listint_len - returns number
 *  of elements in a linked listint_t list
 * @h: input pointer to listint_t list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
    int node = 0;

    if (h == NULL)
        return (0);

    while (h != NULL)
    {
        node++;
        h = h->next;
    }
    return (node);
}