#include "variadic_functions.h"

<<<<<<< HEAD
#include <stdarg.h>

#include <stdio.h>

/**

* sum_them_all - Entry Point

* @k: variadic inputs

* Return: sum

*/

int sum_them_all(const unsigned int k, ...)

{

va_list valist;

unsigned int i, sum = 0;



if (k == 0)

return (0);



va_start(valist, k);



for (i = 0; i < k; i++)

{

sum += va_arg(valist, const unsigned int);

}



va_end(valist);



return (sum);

=======
/**
 * sum_them_all - fills memory with a constant byte
 * @n: the amount of args
 * Return: the sum of all arg reciVe
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list valist;
    unsigned int i;
    int sum = 0;

    if (n == 0)
        return (0);

    va_start(valist, n);

    for (i = 0; i < n; i++)
    {
        sum += va_arg(valist, int);
    }
    va_end(valist);

    return (sum);
>>>>>>> fd7dd923f5ed40a8156a9c6c4ddcf57695139a24
}
