#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - fills memory 
 * @separator: is string to be printed
 * @n: the amount of args
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list valist;
    unsigned int i;

    va_start(valist, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(valist, int));
        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }
    va_end(valist);
    
    printf("\n");
}
