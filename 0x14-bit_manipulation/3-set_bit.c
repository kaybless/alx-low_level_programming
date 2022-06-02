#include "main.h"
/**
 * set_bit - set value to 1 with given index
 * @n:pointer to unsigned int
 * @index: unsigned int index
 * Return: the value of the bit at index or -1
 * if error occur
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int x = 1;

if (sizeof(n) * 8 < index)
return (-1);

x <<= index;
*n |= x;
return (1);
}
