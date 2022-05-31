#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Number element in a list.
 */
size_t list_len(const list_t *h)
{
    size_t size;

    size = 0;
    while (h != NULL)
    {
        h = h->next;
        size++;
    }
    return (size);
}