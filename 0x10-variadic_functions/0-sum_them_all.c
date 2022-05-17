#include "variadic_functions.h"

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

}

