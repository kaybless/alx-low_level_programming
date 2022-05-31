#include <string.h>
#include "lists.h"
/**
 *add_node - add new node at the beggining of list pointer pointing to the 'head'
 *@head: pointer to start of list
 *@str: string to initialize node with
 *Return: address of new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    size_t size = 0;
    list_t *new = malloc(sizeof(list_t));

    if (new == NULL)
        return (NULL);
    new->next = *head;
    new->str = strdup(str);
    if (new->str)
        while (new->str[size])
            ++size;
    new->len = size;
    *head = new;
    return (new);
}