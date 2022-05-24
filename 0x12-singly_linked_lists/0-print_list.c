#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - print all element of a list_t 'h'
 *@h: pointer to first element of list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
    int i;

    if (h == NULL)
        return (0);
    for (i = 1; h->next != NULL; i++)
    {
        if (h->str == NULL)
            printf("[%u] %s\n", h->len, "(nil)");
        else
            printf("[%u] %s\n", h->len, h->str);
        h = h->next;
    }
    printf("[%u] %s\n", h->len, h->str);
    return (i);
}